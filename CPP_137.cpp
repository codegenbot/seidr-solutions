#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float(a.get<int>()) > b.get<float())) ? b : (std::string("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        if (stod(s) > a.get<float>())
            return b;
        else
            return (boost::any(a) > boost::any(b)) ? a : (std::string("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (stod(s2) > stod(s1)) ? b : ((stod(s1) >= stod(s2)) ? a : std::string("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return (stod(s) > x) ? b : ((x >= stod(s)) ? a : std::string("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x1 = boost::any_cast<int>(a);
        int x2 = boost::any_cast<int>(b);
        return (x1 > x2) ? a : ((x1 < x2) ? b : std::string("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int x = boost::any_cast<int>(b);
        return (f > x) ? a : ((x >= f) ? b : std::string("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return (f1 > f2) ? a : ((f1 < f2) ? b : std::string("None"));
    }
    else
        return "None";
}