```
#include <string>
#include <algorithm>

using namespace std;

any compare_one(any a, any b) {
    if (get<any>(a).type() == typeid(int) && get<any>(b).type() == typeid(float)) {
        return b;
    }
    else if (get<any>(a).type() == typeid(float) && get<any>(b).type() == typeid(string)) {
        return b;
    }
    else if (get<any>(a).type() == typeid(string) && get<any>(b).type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return "None";
    }
    else if (get<any>(a).type() == typeid(int) && get<any>(b).type() == typeid(int)) {
        int i = any_cast<int>(a);
        int j = any_cast<int>(b);
        if (i > j)
            return a;
        else if (i < j)
            return b;
        else
            return "None";
    }
    else if (get<any>(a).type() == typeid(float) && get<any>(b).type() == typeid(float)) {
        float f1 = any_cast<float>(a);
        float f2 = any_cast<float>(b);
        if (f1 > f2)
            return a;
        else if (f1 < f2)
            return b;
        else
            return "None";
    }
    else {
        return b;
    }
}