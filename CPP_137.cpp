#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    auto to_double = [](const any& val) -> double {
        if (val.type() == typeid(int)) return any_cast<int>(val);
        if (val.type() == typeid(float)) return any_cast<float>(val);
        if (val.type() == typeid(string)) {
            string str = any_cast<string>(val);
            replace(str.begin(), str.end(), ',', '.');
            return stod(str);
        }
        return 0.0;
    };

    double val_a = to_double(a);
    double val_b = to_double(b);

    if (val_a == val_b) return "None"s;
    if (val_a > val_b) return a;
    return b;
}

int main() {
    // example usage
    any a = 10;
    any b = 20.5f;
    any result = compare_one(a, b);
    if (result.type() == typeid(string)) {
        cout << any_cast<string>(result) << endl;
    } else if (result.type() == typeid(int)) {
        cout << any_cast<int>(result) << endl;
    } else if (result.type() == typeid(float)) {
        cout << any_cast<float>(result) << endl;
    }
    return 0;
}