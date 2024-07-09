#include <boost/variant.hpp>
#include <string>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        int val1 = get<int>(a), val2 = get<string>(b);
        return val1 > 0 ? a : b;
    }
    if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        string strA = get<string>(a), intB = get<int>(b);
        return strA > to_string(intB) ? a : b;
    }
}

int main() {
    assert(compare_one(string("1"), 1) == string("None"));
    return 0;
}