#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) != boost::any_cast<string>(b))
            return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > static_cast<double>(boost::any_cast<int>(b))) ? a : boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (static_cast<double>(boost::any_cast<int>(a)) > boost::any_cast<float>(b)) ? a : b;
    }
    return "None";
}