Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float f = boost::lexical_cast<float>(str);
        if (f > a.cast<int>()) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        float f1 = boost::lexical_cast<float>(str1);
        float f2 = boost::lexical_cast<float>(str2);
        if (f2 > f1) {
            return b;
        }
        else if (f1 == f2) {
            return "None";
        }
        else {
            return a;
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float f = boost::lexical_cast<float>(str);
        if (f > a.cast<int>()) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = a.cast<int>();
        int i2 = b.cast<int>();
        if (i2 > i1) {
            return b;
        }
        else if (i1 == i2) {
            return "None";
        }
        else {
            return a;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int i = b.cast<int>();
        float f = a.cast<float>();
        if (f > i) {
            return a;
        }
        else {
            return "None";
        }
    }
    else {
        return "None";
    }
}