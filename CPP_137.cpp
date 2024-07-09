#include <variant>
#include <string>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        int val1 = get<int>(a), val2 = get<string>(b);
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        string strA = get<string>(a), intB = get<int>(b);
        return strA > to_string(intB) ? a : b;
    }
    else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        int val1 = get<int>(a), val2 = get<int>(b);
        return val1 > val2 ? a : b;
    }
    else if (holds_alternation<double>(a) && holds_alternation<double>(b)) {
        double val1 = get<double>(a), val2 = get<double>(b);
        return val1 > val2 ? a : b;
    }
    else if (holds_alternation<float>(a) && holds_alternation<float>(b)) {
        float val1 = get<float>(a), val2 = get<float>(b);
        return val1 > val2 ? a : b;
    }
    // Add more conditions as needed.
}

int main() {
    variant<string, int, double, float> result = compare_one("abc", 100);
    if (holds_alternation<string>(result)) {
        cout << "The string is: " << get<string>(result) << endl;
    }
    else if (holds_alternation<int>(result)) {
        cout << "The integer is: " << get<int>(result) << endl;
    }
    else if (holds_alternation<double>(result)) {
        cout << "The double is: " << get<double>(result) << endl;
    }
    else if (holds_alternation<float>(result)) {
        cout << "The float is: " << get<float>(result) << endl;
    }
    return 0;
}