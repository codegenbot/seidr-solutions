#include <boost/lexical_cast.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str1 = boost::lexical_cast<std::string>(a);
        std::string str2 = boost::lexical_cast<std::string>(b);
        if (std::stod(str1) > std::stod(str2))
            return a;
        else if (std::stod(str1) < std::stod(str2))
            return b;
        else
            return typeid(int); // Changed to int as "None" is not a valid type in boost::any.
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::lexical_cast<std::string>(b);
        if (std::stod(a.convert_to<std::string>()) > std::stod(str))
            return a;
        else if (std::stod(a.convert_to<std::string>()) < std::stod(str))
            return b;
        else
            return typeid(int); // Changed to int as "None" is not a valid type in boost::any.
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::lexical_cast<std::string>(b);
        if (std::stod(a.convert_to<std::string>()) > std::stod(str))
            return a;
        else if (std::stod(a.convert_to<std::string>()) < std::stod(str))
            return b;
        else
            return typeid(int); // Changed to int as "None" is not a valid type in boost::any.
    } else {
        // If both are strings, compare them.
        std::string str1 = boost::lexical_cast<std::string>(a);
        std::string str2 = boost::lexical_cast<std::string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return typeid(int); // Changed to int as "None" is not a valid type in boost::any.
    }
}