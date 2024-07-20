#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a > boost::any_cast<string>(b) ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return boost::any_cast<string>(a) > to_string((int)b) ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fa = boost::any_cast<float>(a);
        string fb = boost::any_cast<string>(b);
        return fa > stof(fb) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    }
    return "None";
}