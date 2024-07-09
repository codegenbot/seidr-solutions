#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float af = boost::lexical_cast<float>(boost::any_cast<string>(a));
            float bf = boost::any_cast<float>(b);
            if (af > bf)
                return a;
            else
                return boost::any("None");
        } catch (...) {
            return boost::any(b);
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        try {
            float af = boost::any_cast<float>(a);
            float bf = boost::lexical_cast<float>(boost::any_cast<string>(b));
            if (af > bf)
                return a;
            else
                return boost::any("None");
        } catch (...) {
            return boost::any(b);
        }
    }
    return boost::any();
}