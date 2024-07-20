Here's the completed code:

```cpp
#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float a_val = boost::any_cast<float>(a), b_val = boost::any_cast<float>(b);
        return (a_val > b_val ? a : (a_val < b_val ? b : boost::any("None")));
    }
    else if ((a.type() == typeid(string) && b.type() == typeid(int)) ||
             (a.type() == typeid(int) && b.type() == typeid(string))) {
        return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_val = boost::any_cast<float>(a), b_val;
        try {
            b_val = stof(boost::any_cast<string>(b));
        }
        catch (...) {
            return "None";
        }
        return (a_val > b_val ? a : (a_val < b_val ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string a_val = boost::any_cast<string>(a), b_val;
        try {
            b_val = to_string(boost::any_cast<float>(b));
        }
        catch (...) {
            return "None";
        }
        return (stof(a_val) > stof(b_val) ? a : (stof(a_val) < stof(b_val) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_val = boost::any_cast<string>(a), b_val = boost::any_cast<string>(b);
        return (a_val > b_val ? a : (a_val < b_val ? b : boost::any("None")));
    }
}