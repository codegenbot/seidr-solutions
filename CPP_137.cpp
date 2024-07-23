#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any(b.get<double>() > a.get<float()) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double db = boost::any_cast<double>(b);
        string sa = boost::any_cast<string>(a);
        if (stod(sa) < db)
            return b;
        else
            return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        if (stod(s1) < stod(s2))
            return b;
        else
            return a;
    } else {
        return "None";
    }
}