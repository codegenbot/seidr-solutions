#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)(float)b.get_value<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any("Invalid");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return boost::any("Equal");
    }
    else {
        return boost::any("Invalid");
    }
}