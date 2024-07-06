#include <boost/any.hpp>
#include <string>
#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (get<int>(a) > get<int>(b))
            return a;
        else if (get<int>(a) < get<int>(b))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (get<float>(a) > get<float>(b))
            return a;
        else if (get<float>(a) < get<float>(b))
            return b;
        else
            return boost::any("None");
    } else if ((a.type() == typeid(std::string) && b.type() == typeid(int)) || 
               (a.type() == typeid(int) && b.type() == typeid(std::string))) {
        if (get<std::string>(a).compare(std::to_string(get<int>(b))) > 0)
            return a;
        else if (get<std::string>(a).compare(std::to_string(get<int>(b))) < 0)
            return b;
        else
            return boost::any("None");
    } else if ((a.type() == typeid(std::string) && b.type() == typeid(float)) || 
               (a.type() == typeid(float) && b.type() == typeid(std::string))) {
        std::string strB = std::to_string(get<float>(b));
        if (get<std::string>(a).compare(strB) > 0)
            return a;
        else if (get<std::string>(a).compare(strB) < 0)
            return b;
        else
            return boost::any("None");
    } else {
        std::string strA = std::to_string(get<int>(a));
        std::string strB = std::to_string(get<float>(b));
        if (strA.compare(strB) > 0)
            return a;
        else if (strA.compare(strB) < 0)
            return b;
        else
            return boost::any("None");
    }
}