#include <any>
#include <variant>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, float, double>(a) && holds_alternative<string>(b)) {
        return a;
    }
    else if (holds_alternative<int>(a) && holds_alternative<float, double>(b)) {
        int intA = get<int>(a);
        float fltB = get<float>(b);
        if (intA > fltB) return b;
        else if (fltB == intA) return a;
    }
    else if (holds_alternative<string>(a) && holds_alternative<int, float, double>(b)) {
        string strA = get<string>(a);
        int intB = get<int>(b);
        if (intB < 0) return b;
        string str = to_string(intB);
        if (strA > str) return b;
    }
    else if (holds_alternative<int, float, double>(a) && holds_alternative<string>(b)) {
        int intA = get<int>(a);
        string strB = get<string>(b);
        return strB > to_string(intA) ? b : a + b;
    }
    else if (holds_alternative<float>(a) && holds_alternative<double>(b)) {
        float fltA = get<float>(a);
        double dblB = get<double>(b);
        if (fltA < 0.0 || dblB < 0.0) return b;
        string str1 = to_string(fltA);
        string str2 = to_string(dblB);
        if (str1 > str2) return b;
    }
    else {
        any_cast<int>(a) > any_cast<int>(b) ? b : a;
    }
    return a;