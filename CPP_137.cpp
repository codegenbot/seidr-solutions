#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, double>(a) && holds_alternative<double>(b)) {
        return b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<int, double>(b)) {
        return max(a, b);
    }
    else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return "None";
    }
    else if (holds_alternative<string>(a) && holds_alternative<int, double>(b)) {
        string sa = any_cast<string>(a);
        double sb = any_cast<double>(b);
        if (stod(sa) > sb)
            return a;
        else if (stod(sa) < sb)
            return b;
        else
            return "None";
    }
    else if (holds_alternative<int, double>(a) && holds_alternationg<string>(b)) {
        double sa = any_cast<double>(a);
        string sb = any_cast<string>(b);
        if (sa > stod(sb))
            return a;
        else if (sa < stod(sb))
            return b;
        else
            return "None";
    }
    
    // If none of the above conditions are met, it means both variables are of same type.
    // In this case, we can compare them directly.
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return "None";
}