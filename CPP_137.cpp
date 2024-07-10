#include <boost/variant.hpp>

boost::variant<int, double, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? boost::get<int>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<int>(b));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return str > std::to_string(num) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        double num = boost::any_cast<double>(a);
        return std::to_string(num) > str ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return str1 > str2 ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = boost::any_cast<int>(a);
        std::string str = boost::any_cast<std::string>(b);
        return std::to_string(num) > str ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        std::string str = boost::any_cast<std::string>(a);
        return str > std::to_string(num) ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);
        return num1 > num2 ? boost::get<boost::variant<int, double, std::string>>(a) : boost::get<boost::variant<int, double, std::string>>(b));
    }
    else {
        return boost::variant<int, double, std::string>();
    }
}