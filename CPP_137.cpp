#include <boost/variant.hpp>

using namespace boost;

variant<string, int, double, float> compare_one(variant<string, int, double, float> a, variant<string, int, double, float> b) {
    if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);
        return strA > strB ? a : b;
    }
    else if ((holds_alternation<string>(a) && holds_alternative<int>(b)) || (holds_alternative<string>(b) && holds_alternative<int>(a))) {
        int val1 = get_or_else(get<int>(get_or(a, std::string("None"), [](auto& v) { return boost::none; })), 0);
        string str2 = get_or_else(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "");
        return val1 > 0 ? a : b;
    }
    else if ((holds_alternative<int>(a) && holds_alternation<string>(b)) || (holds_alternative<int>(b) && holds_alternation<string>(a))) {
        int val1 = get<int>(a), val2 = get_or_else(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "");
        if (!val2.empty()) val2 = stoi(val2);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<double>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<double>(b))) {
        double val1 = get<double>(a), val2 = get_or_else(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "");
        if (!val2.empty()) val2 = stod(val2);
        return val1 > val2 ? a : b;
    }
    else if ((holds_alternation<float>(a) && holds_alternation<string>(b)) || (holds_alternation<string>(a) && holds_alternation<float>(b))) {
        float val1 = get<float>(a), val2 = get_or_else(get<string>(get_or(b, "None", [](auto& v) { return boost::none; })), "");
        if (!val2.empty()) val2 = stof(val2);
        return val1 > val2 ? a : b;
    }
    else
        return boost::none;
}

int main() {
    // test the function with different inputs
    variant<string, int, double, float> varA = "Hello";
    variant<string, int, double, float> varB = 10;
    std::cout << compare_one(varA, varB).which(); // output: 0 (string)
}