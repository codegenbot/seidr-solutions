#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) >= to_string(a.convert_to<int>()) ? b : a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        if (s == ".") return a;
        if (s == ",") return a;
        float f1 = boost::any_cast<float>(a);
        if (f1 > stof(s)) return a;
        else return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any_cast<string>(a) >= to_string(b.convert_to<int>()) ? a : boost::any(b));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(b);
        if (s == ".") return a;
        if (s == ",") return a;
        float f1 = boost::any_cast<float>(a);
        if (f1 > stof(s)) return a;
        else return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s2 > s1 ? b : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any(a) >= boost::any(b) ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a) ? b : a);
    }
    return "None";
}