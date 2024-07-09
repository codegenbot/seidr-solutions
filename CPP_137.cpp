#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a > b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = any_cast<string>(a);
        string b_str = any_cast<string>(b);
        return stof(b_str) > stof(a_str)
            ? b
            : a;
    }
    return "None";
}