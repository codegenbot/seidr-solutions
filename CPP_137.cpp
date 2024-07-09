#include <boost/variant.hpp>

using namespace boost;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<string>(b) && holds_alternation<int>(a))) {
        int val1 = get_or_else(get<string>(a), 0, [](auto& v) { return boost::none; });
        string str2 = get_or_else(b, "None", [](auto& v) { return boost::none; });
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<string>(b)) || (holds_alternation<int>(b) && holds_alternation<string>(a))) {
        int val1 = get<int>(a), val2 = get_or_else(b, "None", [](auto& v) { return boost::none; });
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<double>(b))) {
        double val1 = get<double>(a), val2 = get_or_else(b, "None", [](auto& v) { return boost::none; });
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<float>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<float>(b))) {
        float val1 = get<float>(a), val2 = get_or_else(b, "None", [](auto& v) { return boost::none; });
        return val1 > val2 ? a : b;
    }
    else
        return boost::none;
}

int main() {
    return 0;
}