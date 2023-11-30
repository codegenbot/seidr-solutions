#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? a : ((intA < intB) ? b : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        return (floatA > floatB) ? a : ((floatA < floatB) ? b : "None");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        strA.erase(std::remove(strA.begin(), strA.end(), ','), strA.end());
        strB.erase(std::remove(strB.begin(), strB.end(), ','), strB.end());
        float floatA = std::stof(strA);
        float floatB = std::stof(strB);
        return (floatA > floatB) ? a : ((floatA < floatB) ? b : "None");
    } else {
        return "None";
    }
}