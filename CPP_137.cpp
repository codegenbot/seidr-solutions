#include <string>
#include <variant>

using namespace std;

variant<int, double, string> compare_one(variant<int, double, string> a, variant<int, double, string> b) {
    if (holds_alternative<int, double>(a) && holds_alternalternative<double, int>(b)) {
        if (get<int>(a) > get<double>(b))
            return a;
        else
            return b;
    }
    else if (holds_alternative<string>(a) && holds_alternative<double>(b)) {
        string str = get<string>(a);
        double num = get<double>(b);
        if (str > to_string(num))
            return a;
        else
            return b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<string>(b)) {
        double num = get<double>(a);
        string str = get<string>(b);
        if (to_string(num) > str)
            return a;
        else
            return b;
    }
    else if (holds_alternation<string>(a) && holds_alternation<string>(b)) {
        string str1 = get<string>(a);
        string str2 = get<string>(b);
        if (str1 > str2)
            return a;
        else
            return b;
    }
    else if (holds_alternative<int>(a) && holds_alternative<string>(b)) {
        int num = get<int>(a);
        string str = get<string>(b);
        if (to_string(num) > str)
            return a;
        else
            return b;
    }
    else if (holds_alternation<string>(a) && holds_alternation<int>(b)) {
        string str = get<string>(a);
        int num = get<int>(b);
        if (str > to_string(num))
            return a;
        else
            return b;
    }
    else if (holds_alternation<double>(a) && holds_alternation<double>(b)) {
        double num1 = get<double>(a);
        double num2 = get<double>(b);
        if (num1 > num2)
            return a;
        else
            return b;
    }
    else {
        return "None";
    }
}