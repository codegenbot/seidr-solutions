Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = boost::any_cast<int>(a);
        float f = boost::any_cast<float>(b);
        return (i > f ? a : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return (stof(s) > i ? b : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int i = boost::any_cast<int>(b);
        return (f > i ? a : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s1 = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return (stof(s1) > f ? a : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s1 = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return (stof(s1) > i ? a : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string s2 = boost::any_cast<string>(b);
        return (f > stof(s2) ? a : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s2 = boost::any_cast<string>(b);
        return (i > stof(s2) ? a : "None");
    }
    return "None";
}