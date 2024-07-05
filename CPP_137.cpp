#include <iostream>
#include <string>
#include <algorithm>
#include <any>
#include <cassert>

using namespace std;

double to_double(std::any val) {
    if (val.type() == typeid(int)) {
        return std::any_cast<int>(val);
    } else if (val.type() == typeid(float)) {
        return std::any_cast<float>(val);
    } else if (val.type() == typeid(string)) {
        string str_val = std::any_cast<string>(val);
        replace(str_val.begin(), str_val.end(), ',', '.');
        return stod(str_val);
    }
    return 0.0;
}

std::any compare_one(std::any a, std::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            int int_a = std::any_cast<int>(a);
            int int_b = std::any_cast<int>(b);
            if (int_a == int_b) return string("None");
            return int_a > int_b ? a : b;
        } else if (a.type() == typeid(float)) {
            float float_a = std::any_cast<float>(a);
            float float_b = std::any_cast<float>(b);
            if (float_a == float_b) return string("None");
            return float_a > float_b ? a : b;
        } else if (a.type() == typeid(string)) {
            string str_a = std::any_cast<string>(a);
            string str_b = std::any_cast<string>(b);
            if (str_a == str_b) return string("None");
            return str_a > str_b ? a : b;
        }
    }
    
    double double_a = to_double(a);
    double double_b = to_double(b);
    if (double_a == double_b) return string("None");
    return double_a > double_b ? a : b;
}

int main() {
    std::any a = 42;
    std::any b = 3.14f;
    try {
        std::any result = compare_one(a, b);
        if (result.type() == typeid(string)) {
            cout << std::any_cast<string>(result) << endl;
        } else if (result.type() == typeid(int)) {
            cout << std::any_cast<int>(result) << endl;
        } else if (result.type() == typeid(float)) {
            cout << std::any_cast<float>(result) << endl;
        } else if (result.type() == typeid(double)) {
            cout << std::any_cast<double>(result) << endl;
        } else {
            cout << "Unexpected type" << endl;
        }

        assert (std::any_cast<string>(compare_one(string("42"), 42)) == "None");
    } catch (const std::bad_any_cast& e) {
        cout << "Cannot cast result. Possibly a None comparison." << endl;
    }
    return 0;
}