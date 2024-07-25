#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (boost::any_cast<std::string>(a) >= boost::any_cast<std::string>(b))
            return a;
        else
            return b;
    }
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
    else
        return "None";
}