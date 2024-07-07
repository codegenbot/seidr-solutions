#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        if (boost::lexical_cast<int>(b.cast<std::string>()) > a.convert_to<int>())
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        if (boost::lexical_cast<int>(a.cast<std::string>()) > b.convert_to<int>())
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        if (boost::lexical_cast<float>(a.cast<std::string>()) > b.convert_to<float>())
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        if (boost::lexical_cast<double>(a.cast<std::string>()) > b.convert_to<double>())
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        if (a.convert_to<float>() > b.convert_to<double>())
            return boost::any(a);
        else if (a.convert_to<float>() < b.convert_to<double>())
            return boost::any(b);
        else
            return boost::any("None");
    }
    if (a.type() == typeid(double) && b.type() == typeid(float)) {
        if (a.convert_to<double>() > b.convert_to<float>())
            return boost::any(a);
        else if (a.convert_to<double>() < b.convert_to<float>())
            return boost::any(b);
        else
            return boost::any("None");
    }
    if (boost::lexical_cast<int>(a.cast<std::string>()) > boost::lexical_cast<int>(b.cast<std::string>()))
        return a;
    else if (boost::lexical_cast<int>(a.cast<std::string>()) < boost::lexical_cast<int>(b.cast<std::string>()))
        return b;
    else
        return boost::any("None");
}