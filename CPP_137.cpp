#include <boost/any.hpp>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double da = std::stod(any_cast<std::string>(a));
        return da > any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double db = std::stod(any_cast<std::string>(b));
        return da > db ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);
        return std::lexicographical_compare(sa.begin(), sa.end(),
            sb.begin(), sb.end()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        double da = any_cast<int>(a);
        std::string sb = any_cast<std::string>(b);
        return da > std::stod(sb) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        double db = any_cast<int>(b);
        std::string sa = any_cast<std::string>(a);
        return std::stod(sa) > db ? a : b;
    }
    return boost::any();