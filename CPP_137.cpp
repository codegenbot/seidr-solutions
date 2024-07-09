#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        double x = std::stod(boost::any_cast<std::string>(a));
        double y = std::stod(boost::any_cast<std::string>(b));
        return x > y ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        double y = std::stod(boost::any_cast<std::string>(b));
        return x > y ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = boost::any_cast<float>(a);
        double y = std::stod(boost::any_cast<std::string>(b));
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        double x = std::stod(boost::any_cast<std::string>(a));
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        double x = std::stod(boost::any_cast<std::string>(a));
        float y = boost::any_cast<float>(b);
        return x > y ? a : b;
    } else {
        return boost::any("None");
    }
}