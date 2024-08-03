#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        if (boost::any_cast<std::string>(a) == boost::any_cast<std::string>(b))
            return "None";
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        if (boost::any_cast<std::string>(a) == "0" || boost::any_cast<int>(b) == 0)
            return "None";
        return a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        if (boost::any_cast<std::string>(a) == boost::any_cast<std::string>(b))
            return "None";
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        if (boost::any_cast<int>(a) > 0)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if (boost::any_cast<float>(a) > 0)
            return boost::any_cast<int>(b);
        else
            return "None";
    }
    else {
        if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
            return a;
        else
            return b;
    }
}