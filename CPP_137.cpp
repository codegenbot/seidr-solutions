#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        if (numA > numB) {
            return numA;
        } else if (numA < numB) {
            return numB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float numA = boost::any_cast<float>(a);
        float numB = boost::any_cast<float>(b);
        if (numA > numB) {
            return numA;
        } else if (numA < numB) {
            return numB;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB) {
            return strA;
        } else if (strA < strB) {
            return strB;
        }
    }
    return "None";
}