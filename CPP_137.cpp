#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a < boost::any_cast<string>(b).compare(0, -1, "0123456789.,-") > 0)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (boost::any_cast<float>(a) > boost::any_cast<double>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((int)b < boost::any_cast<string>(a).compare(0, -1, "0123456789.,-") > 0)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((double)boost::any_cast<string>(b).compare(0, -1, "0123456789.,-") > boost::any_cast<string>(a).compare(0, -1, "0123456789.,-"))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((int)(boost::any_cast<string>(b)).compare(0, -1, "0123456789.,-") > (int)(boost::any_cast<string>(a)).compare(0, -1, "0123456789.,-"))
            return b;
        else
            return a;
    }
    
    return boost::any("None");
}