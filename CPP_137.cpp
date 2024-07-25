#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        size_t pos = strB.find(',');
        if (pos != std::string::npos) {
            strB.erase(pos, 1);
        }
        return (std::stod(strA) > std::stod(strB)) ? a : b;
    }
    if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        std::string strA = boost::any_cast<std::string>(a);
        size_t pos = strA.find(',');
        if (pos != std::string::npos) {
            strA.erase(pos, 1);
        }
        return (std::stod(strA) > boost::any_cast<double>(b)) ? a : b;
    }
    if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(std::string)) {
        std::string strB = boost::any_cast<std::string>(b);
        size_t pos = strB.find(',');
        if (pos != std::string::npos) {
            strB.erase(pos, 1);
        }
        return (boost::any_cast<double>(a) > std::stod(strB)) ? a : b;
    }
    if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
        return boost::any("None");
    }
    return a > b ? a : b;
}