#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str1 = boost::lexical_cast<string>(a);
        string str2 = boost::lexical_cast<string>(b);
        if (stod(str1) > stod(str2))
            return a;
        else if (stod(str1) < stod(str2))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::lexical_cast<string>(b);
        if (stod(a.cast<string>()) > stod(str))
            return a;
        else if (stod(a.cast<string>()) < stod(str))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::lexical_cast<string>(b);
        if (stod(a.cast<string>()) > stod(str))
            return a;
        else if (stod(a.cast<string>()) < stod(str))
            return b;
        else
            return boost::any("None");
    } else {
        // If both are strings, compare them.
        string str1 = boost::lexical_cast<string>(a);
        string str2 = boost::lexical_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    }
}