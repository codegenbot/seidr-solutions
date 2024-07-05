#include <iostream>
#include <string>
#include <typeinfo>
#include <algorithm>
#include <variant>

using namespace std;

float convert_to_float(variant<int, float, string> var) {
    if (holds_alternative<int>(var)) {
        return get<int>(var);
    } else if (holds_alternative<float>(var)) {
        return get<float>(var);
    } else if (holds_alternative<string>(var)) {
        string str = get<string>(var);
        replace(str.begin(), str.end(), ',', '.');
        return stof(str);
    }
    return 0.0;
}

variant<int, float, string> compare_one(variant<int, float, string> a, variant<int, float, string> b) {
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
            string str_a = get<string>(a);
            string str_b = get<string>(b);
            float float_a = convert_to_float(a);
            float float_b = convert_to_float(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } else {
        float float_a = convert_to_float(a);
        float float_b = convert_to_float(b);
        if (float_a == float_b) return "None";
        return float_a > float_b ? a : b;
    }
    return "None";
}

int main() {
    variant<int, float, string> val1 = 5;
    variant<int, float, string> val2 = "4.2";
    auto result = compare_one(val1, val2);
    if (holds_alternative<string>(result)) {
        cout << get<string>(result) << endl; 
    } else if (holds_alternative<int>(result)) {
        cout << get<int>(result) << endl; 
    } else if (holds_alternative<float>(result)) {
        cout << get<float>(result) << endl; 
    }
    return 0;
}