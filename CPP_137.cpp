#include <boost/variant.hpp>

boost::variant<int, double, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b) ? boost::get<int>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)boost::any_cast<double>(a) > (int)boost::any_cast<int>(b) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<int>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        return boost::any_cast<std::string>(a) > std::to_string(boost::any_cast<double>(b)) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        return std::to_string(boost::any_cast<double>(a)) > boost::any_cast<std::string>(b) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return std::to_string(boost::any_cast<int>(a)) > boost::any_cast<std::string>(b) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return boost::any_cast<std::string>(a) > std::to_string(boost::any_cast<int>(b)) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b);
    }
    else {
        return boost::variant<int, double, std::string>();
    }
}