#include <boost/variant.hpp>

boost::variant<int, float, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::get<float>(b) > boost::get<int>(a) ? boost::get<boost::variant<int, float, std::string>>(b) : boost::get<boost::variant<int, float, std::string>>(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::get<float>(a) > boost::get<int>(b) ? boost::get<boost::variant<int, float, std::string>>(a) : boost::get<boost::variant<int, float, std::string>>(b);
    } else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        return boost::get<std::string>(b) > boost::get<std::string>(a) ? boost::get<boost::variant<int, float, std::string>>(b) : boost::get<boost::variant<int, float, std::string>>(a);
    } else if (boost::holds_alternative<std::string>(a) && b.type() == typeid(float)) {
        return boost::get<float>(b) > std::stof(boost::get<std::string>(a)) ? boost::get<boost::variant<int, float, std::string>>(b) : boost::get<boost::variant<int, float, std::string>>(a);
    } else if (a.type() == typeid(float) && boost::holds_alternative<std::string>(b)) {
        return std::stof(boost::get<std::string>(b)) > boost::get<float>(a) ? boost::get<boost::variant<int, float, std::string>>(b) : boost::get<boost::variant<int, float, std::string>>(a);
    } else {
        return "None";
    }
}