#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return s1.compare(s2) > 0 ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return s.compare(to_string(i)) > 0 ? a : boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return s.compare(to_string(d)) > 0 ? a : boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return i > stoi(s) ? a : boost::any(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string s = boost::any_cast<string>(b);
        return d > stod(s) ? a : boost::any(b);
    }
    else {
        return boost::any("None");
    }
}