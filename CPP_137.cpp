Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int i;
        if (sscanf(s.c_str(), "%d", &i) != 1) return b;
        return i > a.cast<int>() ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(b);
        string s = boost::any_cast<string>(a);
        int j;
        if (sscanf(s.c_str(), "%d", &j) != 1) return a;
        return i > j ? boost::any(a) : boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        int i;
        if (sscanf(s.c_str(), "%f", &i) != 1) return a;
        return f > i ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        float f1, f2;
        sscanf(s1.c_str(), "%f", &f1);
        sscanf(s2.c_str(), "%f", &f2);
        if (f1 > f2) return a;
        else if (f1 < f2) return b;
        else return boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return f1 > f2 ? a : b;
    }
    return a > b ? a : b;
}