#include <boost/any.hpp>
#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<int>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(a).compare(boost::any_cast<std::string>(b)) > 0 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int bInt = std::stoi(boost::any_cast<std::string>(b));
        return bInt > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int aInt = std::stoi(boost::any_cast<std::string>(a));
        return aInt > boost::any_cast<int>(b) ? a : b;
    }
    else {
        return boost::any("None");
    }
}