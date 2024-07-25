#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : (float)b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : (string)"None";
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        return a > boost::any_cast<string>(b) ? a : b;
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    }
    return boost::any("None");
}