#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((string)a > to_string((float)b))
            return a;
        else if ((string)a < to_string((float)b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((string)a > to_string((double)b))
            return a;
        else if ((string)a < to_string((double)b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((string)a > to_string((int)b))
            return a;
        else if ((string)a < to_string((int)b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a > b.convert_to<string>())
            return a;
        else if ((string)a < b.convert_to<string>())
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}