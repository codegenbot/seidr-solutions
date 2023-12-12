```
#include <iostream>
#include <string>
#include <algorithm>
#include </usr/local/include/boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        if (b.type() == typeid(float)) {
            float y = boost::any_cast<float>(b);
            return (x > y) ? a : b;
        } else if (b.type() == typeid(string)) {
            string s = boost::any_cast<string>(b);
            return (x > stof(s)) ? a : b;
        }
    } else if (a.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        if (b.type() == typeid(int)) {
            int y = boost::any_cast<int>(b);
            return (x > y) ? a : b;
        } else if (b.type() == typeid(string)) {
            string s = boost::any_cast<string>(b);
            return (x > stof(s)) ? a : b;
        }
    } else if (a.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        if (b.type() == typeid(int)) {
            int y = boost::any_cast<int>(b);
            return (stof(x) > y) ? a : b;
        } else if (b.type() == typeid(float)) {
            float y = boost::any_cast<float>(b);
            return (stof(x) > y) ? a : b;
        }
    }
    return "None";
}
```