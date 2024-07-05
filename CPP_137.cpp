#include <iostream>
#include <string>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    auto parse_real = [](const any& val) -> double {
        if (val.type() == typeid(int)) {
            return any_cast<int>(val);
        } else if (val.type() == typeid(float)) {
            return any_cast<float>(val);
        } else if (val.type() == typeid(string)) {
            string str_val = any_cast<string>(val);
            replace(str_val.begin(), str_val.end(), ',', '.');
            return stod(str_val);
        }
        throw invalid_argument("Unsupported type");
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
    any a = string("3,14");
    any b = 3.14;
    any result = compare_one(a, b);

    try {
        cout << any_cast<string>(result) << endl;
    } catch(const bad_any_cast&) {
        try {
            cout << any_cast<int>(result) << endl;
        } catch(const bad_any_cast&) {
            try {
                cout << any_cast<float>(result) << endl;
            } catch(const bad_any_cast&) {
                cout << "Invalid result type" << endl;
            }
        }
    }
    return 0;
}