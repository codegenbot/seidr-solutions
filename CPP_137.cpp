#include <string>
#include <iostream>

using namespace boost;

any compare_one(any a, any b) {
    if (is_any_of<a>(int.class)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : any("None"));
    } else if (is_any_of<a>(double.class)) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : any("None"));
    } else {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        if (s1 == s2) {
            return any("None");
        }
        return (s1 > s2) ? a : b;
    }
}