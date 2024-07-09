#include <boost/lexical_cast.hpp>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float af = boost::lexical_cast<float>(boost::any_cast<std::string>(a));
            float bf = boost::any_cast<float>(b);
            if (af > bf)
                return a;
            else
                return boost::any("None");
        } catch (...) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        try {
            float af = boost::any_cast<float>(a);
            float bf = boost::lexical_cast<float>(boost::any_cast<std::string>(b));
            if (af > bf)
                return a;
            else
                return boost::any("None");
        } catch (...) {
            return b;
        }
    }
    return boost::any();
}