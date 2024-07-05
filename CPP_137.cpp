#include <iostream>
#include <variant>
#include <string>
#include <algorithm>

using namespace std;

string replace_comma_with_dot(const string &s) {
    string result = s;
    replace(result.begin(), result.end(), ',', '.');
    return result;
}

variant<string, int, float> compare_one(variant<int, float, string> a, variant<int, float, string> b) {
    try {
        if (a.index() == b.index()) {
            if (holds_alternative<int>(a)) {
                int int_a = get<int>(a);
                int int_b = get<int>(b);
                if (int_a == int_b) return "None";
                return int_a > int_b ? a : b;
            } else if (holds_alternative<float>(a)) {
                float float_a = get<float>(a);
                float float_b = get<float>(b);
                if (float_a == float_b) return "None";
                return float_a > float_b ? a : b;
            } else if (holds_alternative<string>(a)) {
                string str_a = replace_comma_with_dot(get<string>(a));
                string str_b = replace_comma_with_dot(get<string>(b));
                float float_a = stof(str_a);
                float float_b = stof(str_b);
                if (float_a == float_b) return "None";
                return float_a > float_b ? a : b;
            }
        } else {
            string str_a = holds_alternative<string>(a) ? get<string>(a) : to_string(get<holds_alternative<int>(a) ? int : float>(a));
            string str_b = holds_alternative<string>(b) ? get<string>(b) : to_string(get<holds_alternative<int>(b) ? int : float>(b));
            float float_a = stof(replace_comma_with_dot(str_a));
            float float_b = stof(replace_comma_with_dot(str_b));
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } catch (const bad_variant_access &) {
        return "None";
    }
}

int main() {
    variant<int, float, string> a, b;
    a = 42;
    b = "42,0";
    auto result = compare_one(a, b);
    if (holds_alternative<string>(result)) {
        cout << get<string>(result) << endl;
    } else if (holds_alternative<int>(result)) {
        cout << get<int>(result) << endl;
    } else if (holds_alternative<float>(result)) {
        cout << get<float>(result) << endl;
    }
    return 0;
}