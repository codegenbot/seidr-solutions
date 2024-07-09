#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a
            : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : boost::any(std::to_string(boost::any_cast<int>(a)));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : boost::any(std::to_string(boost::any_cast<float>(b)));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string a_str = boost::any_cast<std::string>(a);
        std::string b_str = boost::any_cast<std::string>(b);
        return stof(b_str) > stof(a_str)
            ? a
            : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return stof(boost::any_cast<std::string>(b)) > boost::any_cast<float>(a)
            ? b
            : boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any_cast<float>(a) > stof(boost::any_cast<std::string>(b))
            ? a
            : boost::any("None");
    }
    return boost::any("None");
}