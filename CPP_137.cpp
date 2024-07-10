#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((dynamic_pointer_cast<string>(a))->compare((boost::lexical_cast<string>(b))) > 0)
            return a;
        else if ((boost::lexical_cast<string>(b)).compare((dynamic_pointer_cast<string>(a))) > 0)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if ((boost::lexical_cast<string>(a)).compare((dynamic_pointer_cast<string>(b))) > 0)
            return a;
        else if ((dynamic_pointer_cast<string>(b))->compare((boost::lexical_cast<string>(a))) > 0)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((dynamic_pointer_cast<string>(a))->compare((dynamic_pointer_cast<string>(b))) > 0)
            return a;
        else if ((dynamic_pointer_cast<string>(b))->compare((dynamic_pointer_cast<string>(a))) > 0)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}