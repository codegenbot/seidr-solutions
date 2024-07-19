#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ?
            b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ?
            a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double bDouble = boost::any_cast<double>(b);
        return bDouble > (double)stod(a.convert_to<string>().c_str()) ?
            b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double aDouble = (double)a.convert_to<double>();
        return aDouble > stod(b.convert_to<string>()) ?
            a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return stod(a.convert_to<string>().c_str()) > stod(b.convert_to<string>()) ?
            a : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}