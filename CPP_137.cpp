#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, float>(a) && holds_alternative<float, int>(b)) {
        return b;
    }
    else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);
        if (stof(sa) > stof(sb))
            return a;
        else if (stof(sa) < stof(sb))
            return b;
        else
            return "None";
    }
    else if (holds_alternative<string>(a) && holds_alternative<int, float>(b)) {
        string sa = get<string>(a);
        double sb = get<double>(b);
        if (stof(sa) > sb)
            return a;
        else if (stof(sa) < sb)
            return b;
        else
            return "None";
    }
    else if (holds_alternative<int, float>(a) && holds_alternation<string>(b)) {
        double sa = get<double>(a);
        string sb = get<string>(b);
        if (sa > stof(sb))
            return a;
        else if (sa < stof(sb))
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