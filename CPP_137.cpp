#include <string>
#include <variant>

using namespace std;

template<typename... Ts>
variant<Ts> compare_one(const variant<Ts>& a, const variant<Ts>& b) {
    if (holds_alternative<int, double>(a) && holds_alternative<double, int>(b)) {
        if (get_if<int>(&get<int>(a))) {
            return (int)get<int>(a) > get<double>(b) ? a : b;
        } else {
            return (double)get<double>(a) > get<int>(b) ? a : b;
        }
    } else if (holds_alternative<string>(a) && holds_alternative<double, int>(b)) {
        string str = get<string>(a);
        double num = get<double>(b);
        return str > to_string(num) ? a : b;
    } else if (holds_alternative<double, int>(a) && holds_alternative<string>(b)) {
        double num = get<double>(a);
        string str = get<string>(b);
        return to_string(num) > str ? a : b;
    } else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string str1 = get<string>(a);
        string str2 = get<string>(b);
        return str1 > str2 ? a : b;
    } else if (holds_alternative<int, double>(a) && holds_alternative<string>(b)) {
        int num = get<int>(a);
        string str = get<string>(b);
        return to_string(num) > str ? a : b;
    } else if (holds_alternative<string>(a) && holds_alternative<int, double>(b)) {
        string str = get<string>(a);
        int num = get<int>(b);
        return str > to_string(num) ? a : b;
    } else if (holds_alternative<double, int>(a) && holds_alternative<double, int>(b)) {
        double num1 = get<double>(a);
        double num2 = get<double>(b);
        return num1 > num2 ? a : b;
    }
    return "None";
}