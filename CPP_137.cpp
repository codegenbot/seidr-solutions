#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof(boost::any_cast<string>(a));
        return (fa > boost::any_cast<float>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fb = stof(boost::any_cast<string>(b));
        return (boost::any_cast<float>(a) > fb) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (stof(sa) > stof(sb)) ? a : b;
    }
    return boost::any("None");
}