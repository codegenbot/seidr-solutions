#include <iostream>
#include <string>
#include <any>
#include <algorithm>
#include <stdexcept>

using namespace std;

string replace_comma_with_dot(string s) {
    replace(s.begin(), s.end(), ',', '.');
    return s;
}

any compare_one(any a, any b) {
    try {
        if (a.type() == typeid(int) && b.type() == typeid(int)) {
            int int_a = any_cast<int>(a);
            int int_b = any_cast<int>(b);
            if (int_a == int_b) return "None";
            return int_a > int_b ? a : b;
        } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
            float float_a = any_cast<float>(a);
            float float_b = any_cast<float>(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
            string str_a = any_cast<string>(a);
            string str_b = any_cast<string>(b);
            float float_a = stof(replace_comma_with_dot(str_a));
            float float_b = stof(replace_comma_with_dot(str_b));
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else {
            string str_a = a.type() == typeid(string) ? any_cast<string>(a) : to_string(any_cast<int>(a));
            string str_b = b.type() == typeid(string) ? any_cast<string>(b) : to_string(any_cast<int>(b));
            float float_a = stof(replace_comma_with_dot(str_a));
            float float_b = stof(replace_comma_with_dot(str_b));
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } catch (const bad_any_cast &) {
        return "None";
    }
}

int main() {
    // Example Usage
    any a = 42;
    any b = string("42,5");

    any result = compare_one(a, b);
    if (result.type() == typeid(string))
        cout << any_cast<string>(result) << endl;
    else if (result.type() == typeid(int))
        cout << any_cast<int>(result) << endl;
    else if (result.type() == typeid(float))
        cout << any_cast<float>(result) << endl;
    else
        cout << "None" << endl;

    return 0;
}