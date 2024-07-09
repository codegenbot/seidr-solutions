#include <variant>
#include <string>

using std::variant;
using std::string;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        int val1 = 0, val2 = get<int>(b);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        string strA = get<string>(a), strB = std::to_string(get<int>(b));
        return strA > strB ? a : b;
    }
    else {
        return "";
    }
}

int main() {
    assert(boost::get<std::string>(compare_one(std::string("1"), 1)) == "");
    return 0;
}