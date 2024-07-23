#include <boost/lexical_cast.hpp>
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        if (b.type() == typeid(float))
            return b;
        else if (b.type() == typeid(std::string))
            return b;
    } 
    else if (a.type() == typeid(float)) {
        if (b.type() == typeid(std::string))
            return a;
    }
    else if (a.type() == typeid(std::string)) {
        if (b.type() == typeid(int))
            return a;
        else if (b.type() == typeid(float))
            return b;
    }

    std::string str1 = boost::lexical_cast<std::string>(a);
    std::string str2 = boost::lexical_cast<std::string>(b);

    if (str1 > str2)
        return a;
    else if (str1 < str2)
        return b;
    else
        return typeid(std::string);
}