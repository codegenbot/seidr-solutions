#include <boost/variant.hpp>

boost::variant<int, float> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::get<float>(b) > boost::get<int>(a) ? boost::move(b) : boost::move(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::get<float>(a) > boost::get<int>(b) ? boost::move(a) : boost::move(b);
    } else if (a.type() == typeid(boost::variant<std::string, std::string>) && b.type() == typeid(boost::variant<std::string, std::string>)) {
        boost::variant<std::string, std::string> varA = boost::get<boost::variant<std::string, std::string>>(a);
        boost::variant<std::string, std::string> varB = boost::get<boost::variant<std::string, std::string>>(b);
        return boost::get<float>(boost::get<std::string>(varB)) > boost::get<int>(boost::get<std::string>(varA)) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return boost::get<float>(b) > stof(boost::any_cast<string>(a)) ? boost::move(b) : boost::move(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return stof(boost::any_cast<string>(b)) > boost::get<float>(a) ? boost::move(b) : boost::move(a);
    } else {
        return "None";
    }
}