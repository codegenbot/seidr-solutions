#include "/usr/local/include/boost/boost/variant.hpp"

using namespace boost;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return (strA > strB) ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternative<int>(b)) || (holds_alternation<string>(b) && holds_alternative<int>(a))) {
        int val1 = get_or(get<string>(get_or(a, "None", [](auto& v) { return boost::none; })), 0);
        string str2 = get_or(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "None");
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternative<int>(a) && holds_alternation<string>(b)) || (holds_alternative<int>(b) && holds_alternation<string>(a))) {
        int val1 = get<int>(a), val2 = get_or(b, "None", [](auto& v) { return boost::none; }) == "None" ? 0 : stoi(get_or(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "0"));
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<double>(b))) {
        double val1 = get<double>(a), val2 = get_or(b, "None", [](auto& v) { return boost::none; }) == "None" ? 0.0 : stod(get_or(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "0"));
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<float>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<float>(b))) {
        float val1 = get<float>(a), val2 = get_or(b, "None", [](auto& v) { return boost::none; }) == "None" ? 0.0f : stof(get_or(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "0"));
        return val1 > val2 ? a : b;
    }
    else
        return "None";
}