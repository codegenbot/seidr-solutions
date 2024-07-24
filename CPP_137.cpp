#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > b.convert_to<int>() ? a : boost::any((long long)-1);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (int)b > a.convert_to<double>() ? b : boost::any((long long)-1);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(b) > boost::any_cast<std::string>(a) ? b : a;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) &&
             (b.type() == typeid(std::string))) {
        std::string str = boost::any_cast<std::string>(b);
        if (str.find('.') != std::string::npos || str.find(',') != std::string::npos)
            return b;
        else
            return a > boost::any_cast<int>(b) ? a : boost::any((long long)-1);
    }
    else if ((a.type() == typeid(std::string)) &&
             (b.type() == typeid(int) || b.type() == typeid(double))) {
        std::string str = boost::any_cast<std::string>(a);
        if (str.find('.') != std::string::npos || str.find(',') != std::string::npos)
            return a;
        else
            return boost::any((long long)-1);
    }
    return b;
}