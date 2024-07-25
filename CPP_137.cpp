```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::lexical_cast<int>(b.convert_to<string>()) > a.convert_to<int>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::lexical_cast<double>(a.convert_to<string>()) > b.convert_to<float>())
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::lexical_cast<double>(a.convert_to<string>()) > b.convert_to<double>())
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (a.convert_to<float>() > boost::lexical_cast<float>(b.convert_to<string>()))
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (a.convert_to<double>() > boost::lexical_cast<double>(b.convert_to<string>()))
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(a.convert_to<string>()) > boost::lexical_cast<double>(b.convert_to<string>()))
            return a;
        else if (boost::lexical_cast<double>(a.convert_to<string>()) < boost::lexical_cast<double>(b.convert_to<string>()))
            return b;
        else
            return boost::any("None");
    }
}