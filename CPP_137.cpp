#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return ((float)a > stof(any_cast<string>(b))) ? a : boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return stod(any_cast<string>(b)) > (int)a ? boost::any(b) : boost::any(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return any_cast<string>(a) > any_cast<string>(b) ? a : boost::any(b);
    }
    
    return boost::any("None");
}