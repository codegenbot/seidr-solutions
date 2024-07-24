#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > b.convert_to<int>() ? a : boost::any(int(0));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (int)b > a.convert_to<double>() ? b : boost::any(int(0));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : boost::any(int(0));
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) &&
             (b.type() == typeid(string))) {
        string str = boost::any_cast<string>(b);
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return b;
        else
            return a > boost::any_cast<int>(b) ? a : boost::any(int(0));
    }
    else if ((a.type() == typeid(string)) &&
             (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return a;
        else
            return boost::any(int(0));
    }
    return b;
}