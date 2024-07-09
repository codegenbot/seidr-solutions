```
#include <variant>
#include <string>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    if ((holds_alternative<int>(a) && holds_alternative<string>(b)) || (holds_alternative<string>(a) && holds_alternation