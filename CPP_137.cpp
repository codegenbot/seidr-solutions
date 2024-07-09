#include <variant>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        int val1 = get<int>(a), val2 = 0; // assume string to int conversion is allowed
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<string>(a) && holds_alternation<int>(b))) {
        string strA = get<string>(a), intB = 0; // assume string to int conversion is allowed
        return strA > to_string(intB) ? a : b;
    }
    else {
        return "None";
    }
}

int main() {
    assert(boost::get<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}