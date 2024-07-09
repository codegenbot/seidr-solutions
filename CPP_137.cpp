#include <variant>
#include <string>
#include <boost/variant.hpp>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return std::variant<string>(strA > strB ? a : b);
    }
    else if (holds_alternative<int>(a) && holds_alternation<string>(b)) {
        int val1 = get<int>(a), val2 = 0;
        return val1 > val2 ? a : b;
    }
    else if (holds_alternation<string>(a) && holds_alternation<int>(b)) {
        string strA = get<string>(a), intB = 0;
        return strA > to_string(intB) ? a : b;
    }
}

int main() {
    return 0;
}