#include <boost/conversion.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        boost::string str1 = boost::lexical_cast<string>(a);
        boost::string str2 = boost::lexical_cast<string>(b);
        if (stod(str1) > stod(str2))
            return a;
        else if (stod(str1) < stod(str2))
            return b;
        else
            return any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        boost::string str = boost::lexical_cast<string>(b);
        if (stod(a.cast<string>()) > stod(str))
            return a;
        else if (stod(a.cast<string>()) < stod(str))
            return b;
        else
            return any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        boost::string str = boost::lexical_cast<string>(b);
        if (stod(a.cast<string>()) > stod(str))
            return a;
        else if (stod(a.cast<string>()) < stod(str))
            return b;
        else
            return any("None");
    } else {
        // If both are strings, compare them.
        boost::string str1 = boost::lexical_cast<string>(a);
        boost::string str2 = boost::lexical_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return any("None");
    }
}