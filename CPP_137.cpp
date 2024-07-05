#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

using any = std::string;

any compare_one(const any& a, const any& b) {
    auto parse_real = [](const any& val) -> double {
        try {
            return stod(val);
        } catch (const invalid_argument& e) {
            throw invalid_argument("Unsupported type");
        }
    };

    double val_a = parse_real(a);
    double val_b = parse_real(b);

    if (val_a == val_b) {
        return "None";
    } else if (val_a > val_b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    string a, b;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;

    cout << "The result of comparison: " << compare_one(a, b) << endl;
    return 0;
}