#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float) || a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = boost::any_cast<string>(a);
        double db = boost::any_cast<double>(b);
        return db > stod(sa) ? b : a;
    }
    else if (a.type() == typeid(float) || a.type() == typeid(double) && b.type() == typeid(string)) {
        string sb = boost::any_cast<string>(b);
        double da = boost::any_cast<double>(a);
        return da > stod(sb) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return stod(sa) > stod(sb) ? a : b;
    }
    else {
        return "None";
    }
}