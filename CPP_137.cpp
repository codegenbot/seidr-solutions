#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) == boost::any_cast<string>(b))
            return boost::any();
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::any_cast<string>(a) == "0" || boost::any_cast<int>(b) == 0)
            return boost::any();
        return boost::any_cast<string>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<string>(a) == boost::any_cast<string>(b))
            return boost::any();
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<int>(a) > 0)
            return boost::any_cast<string>(b);
        else
            return boost::any();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if (boost::any_cast<float>(a) > 0)
            return boost::any_cast<int>(b);
        else
            return boost::any();
    }
    else {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else
            return b;
    }
}