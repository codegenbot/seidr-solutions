#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() > (float)b.convert_to<float()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (float)a.convert_to<float>() > stod(str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) == boost::any_cast<string>(b))
            return boost::any("None");
        else
            return a > b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.convert_to<float>() > b.convert_to<float>() ? a : b;
    }
    else
        return boost::any("None");
}