#include <boost/variant.hpp>

boost::variant<int, float> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::get<float>(b) > boost::get<int>(a) ? boost::get<float>(b) : boost::get<int>(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::get<float>(a) > boost::get<int>(b) ? boost::get<float>(a) : boost::get<int>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        return stod(strB) > stod(strA) ? boost::get<std::string>(b) : boost::get<std::string>(a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return boost::get<float>(b) > stod(boost::any_cast<std::string>(a)) ? boost::get<float>(b) : boost::get<float>(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return stod(boost::any_cast<std::string>(b)) > boost::get<float>(a) ? boost::get<float>(b) : boost::get<float>(a);
    } else {
        return 0;
    }
}