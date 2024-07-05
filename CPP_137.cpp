#include <iostream>
#include <string>
#include <variant>
#include <algorithm>
#include <stdexcept>

using namespace std;

variant<int, float, string> compare_one(variant<int, float, string> a, variant<int, float, string> b) {
    auto to_double = [](const variant<int, float, string>& val) -> double {
        if (holds_alternative<int>(val)) return get<int>(val);
        if (holds_alternative<float>(val)) return get<float>(val);
        if (holds_alternative<string>(val)) {
            string str = get<string>(val);
            replace(str.begin(), str.end(), ',', '.');
            return stod(str);
        }
        throw invalid_argument("Invalid type");
    };

    double val_a = to_double(a);
    double val_b = to_double(b);

    if (val_a == val_b) return "None";
    if (val_a > val_b) return a;
    return b;
}

int main() {
    variant<int, float, string> a, b;
    // Example inputs - these would typically come from user input or other sources
    a = 5;
    b = string("4,5");

    variant<int, float, string> result = compare_one(a, b);

    if (holds_alternative<string>(result) && get<string>(result) == "None")
        cout << "None" << endl;
    else if (holds_alternative<int>(result))
        cout << "Greater: " << get<int>(result) << endl;
    else if (holds_alternative<float>(result))
        cout << "Greater: " << get<float>(result) << endl;
    else
        cout << "Greater: " << get<string>(result) << endl;

    return 0;
}