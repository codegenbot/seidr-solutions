#include <variant>
#include <string>
#include <boost/variant.hpp>

using namespace std;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        int val1 = get<int>(a), val2 = get<int>(b);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<int>(b)) || (holds_alternation<int>(a) && holds_alternation<string>(b))) {
        variant<string, int> vA = a, vB = b;
        string strA = get<string>(vA);
        int val2 = get<int>(vB);
        return strA > to_string(val2) ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<double>(b)) || (holds_alternation<double>(a) && holds_alternation<string>(b))) {
        variant<string, double> vA = a, vB = b;
        string strA = get<string>(vA);
        double val2 = get<double>(vB);
        return strA > to_string(val2) ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternation<float>(b)) || (holds_alternation<float>(a) && holds_alternation<string>(b))) {
        variant<string, float> vA = a, vB = b;
        string strA = get<string>(vA);
        float val2 = get<float>(vB);
        return strA > to_string(val2) ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<double>(b)) || (holds_alternation<double>(a) && holds_alternation<int>(b))) {
        variant<int, double> vA = a, vB = b;
        int val1 = get<int>(vA);
        double val2 = get<double>(vB);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<int>(a) && holds_alternation<float>(b)) || (holds_alternation<float>(a) && holds_alternation<int>(b))) {
        variant<int, float> vA = a, vB = b;
        int val1 = get<int>(vA);
        float val2 = get<float>(vB);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<float>(b)) || (holds_alternation<float>(a) && holds_alternation<double>(b))) {
        variant<double, float> vA = a, vB = b;
        double val1 = get<double>(vA);
        float val2 = get<float>(vB);
        return val1 > val2 ? a : b;
    }
    else
        return 0;