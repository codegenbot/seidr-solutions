#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, float>(a) && holds_alternative<float, int>(b)) {
        return b;
    }
    else if (holds_alternative<float, int>(a) && holds_alternative<int, float>(b)) {
        return max(a, b);
    }
    else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return "None";
    }
    else if (holds_alternative<string>(a) && (holds_alternative<int>(b) || holds_alternative<float>(b))) {
        string sa = get<string>(a);
        double sb = get<double>(b);
        if (stod(sa) > sb)
            return a;
        else if (stod(sa) < sb)
            return b;
        else
            return "None";
    }
    else if ((holds_alternative<int>(a) || holds_alternative<float>(a)) && holds_alternative<string>(b)) {
        double sa = get<double>(a);
        string sb = get<string>(b);
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