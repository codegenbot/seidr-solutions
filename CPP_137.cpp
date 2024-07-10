```cpp
#include <iostream>
#include <string>
#include <boost/variant.hpp>

using namespace std;

namespace boost {
    variant<int, double, string> compare_one(variant<int, double, string> a, variant<int, double, string> b) {
        if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
            return get<int>(a) > get<double>(b) ? a : b;
        }
        else if (holds_alternative<double>(a) && holds_alternative<int>(b)) {
            return get<double>(a) > get<int>(b) ? a : b;
        }
        else if (holds_alternative<string>(a) && holds_alternative<double>(b)) {
            string str = get<string>(a);
            double num = get<double>(b);
            return str > to_string(num) ? a : b;
        }
        else if (holds_alternative<double>(a) && holds_alternation<string>(b)) {
            string str = get<string>(b);
            double num = get<double>(a);
            return to_string(num) > str ? a : b;
        }
        else if (holds_alternative<string>(a) && holds_alternation<string>(b)) {
            string str1 = get<string>(a);
            string str2 = get<string>(b);
            return str1 > str2 ? a : b;
        }
        else if (holds_alternative<int>(a) && holds_alternation<string>(b)) {
            int num = get<int>(a);
            string str = get<string>(b);
            return to_string(num) > str ? a : b;
        }
        else if (holds_alternation<string>(a) && holds_alternation<int>(b)) {
            int num = get<int>(b);
            string str = get<string>(a);
            return str > to_string(num) ? a : b;
        }
        else if (holds_alternative<double>(a) && holds_alternative<double>(b)) {
            double num1 = get<double>(a);
            double num2 = get<double>(b);
            return num1 > num2 ? a : b;
        }
        else {
            return none;
        }
    }
}