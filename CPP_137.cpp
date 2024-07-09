#include <variant>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if (get<int>(a) > get<float>(b)) {
        return b;
    }
    if (get<int>(a) > get<double>(b)) {
        return b;
    }
    if (get<float>(a) > get<double>(b)) {
        return b;
    }
    if (get<string>(a) > get<string>(b)) {
        return get<string>(a) > get<string>(b) ? a : b;
    }
    if ((get<int>(a) > get<string>(b)) || (get<string>(a) > get<int>(b))) {
        int intB = get<int>(b);
        string strA = get<string>(a);
        return strA > to_string(intB) ? a : to_string(intB) + b;
    }
    if ((get<float>(a) > get<string>(b)) || (get<string>(a) > get<float>(b))) {
        float fltA = get<float>(a);
        string strB = get<string>(b);
        return strB > to_string(fltA) ? b : a + b;
    }
    if ((get<double>(a) > get<string>(b)) || (get<string>(a) > get<double>(b))) {
        double dblA = get<double>(a);
        string strB = get<string>(b);
        return strB > to_string(dblA) ? b : a + b;
    }
    if (get<int>(a) > get<int>(b)) {
        int intA = get<int>(a);
        int intB = get<int>(b);
        return intA > intB ? a : b;
    }
    if (get<float>(a) > get<float>(b)) {
        float fltA = get<float>(a);
        float fltB = get<float>(b);
        return fltA > fltB ? a : b;
    }
    if (get<double>(a) > get<double>(b)) {
        double dblA = get<double>(a);
        double dblB = get<double>(b);
        return dblA > dblB ? a : b;
    }
    return a;
}