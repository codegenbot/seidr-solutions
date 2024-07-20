#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : (b.convert_to<boost::any>()).type(b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : (b.convert_to<boost::any>()).type(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a), sb = boost::any_cast<string>(b);
        return sa > sb ? a : (b.convert_to<boost::any>()).type(b);
    }
    if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b), f = boost::any_cast<float>(b);
        return i > 0 ? f > i ? a : b : (f > 0 ? f : i) > 0 ? &"None" : &s;
    }
    if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a), f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        return i > 0 ? f > i ? &s : a : (f > 0 ? f : i) > 0 ? &"None" : &s;
    }
    if (a == b) {
        return boost::any("None");
    }
    return a > b ? a : b;
}