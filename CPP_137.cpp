#include <boost/any.hpp>
#include <string>

std::string compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? boost::any_cast<int>(a) : boost::any_cast<int>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? boost::any_cast<float>(a) : boost::any_cast<float>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)) ? boost::any_cast<std::string>(a) : boost::any_cast<std::string>(b);
    } else {
        return "None";
    }
}