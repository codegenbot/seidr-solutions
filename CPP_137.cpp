#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val1 = boost::any_cast<int>(a);
        int val2 = boost::any_cast<int>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val1 = boost::any_cast<float>(a);
        float val2 = boost::any_cast<float>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string val1 = boost::any_cast<string>(a);
        string val2 = boost::any_cast<string>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    return boost::any("None");
}