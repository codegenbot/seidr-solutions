#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any(string("None"));
    }
    else {
        double val1 = boost::any_cast<double>(a);
        double val2 = boost::any_cast<double>(b);
        if (val1 > val2)
            return a;
        else if (val1 < val2)
            return b;
        else
            return boost::any(string("None"));
    }
}