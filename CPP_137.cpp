#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(a.get<int>() > b.get<int>() ? &b : &a);
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        float fa = a.get<float>(), fb = b.get<float>();
        return boost::any(fa > fb ? &b : &a);
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
        string fs = a.get<string>(), fb = b.get<string>();
        return boost::any(fs > fb ? &b : &a);
    } else {
        return boost::any("None");
    }
}