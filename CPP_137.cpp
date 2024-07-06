```cpp
#include <boost/convert.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int num_a = boost::any_cast<int>(a);
        double num_b = boost::any_cast<double>(b);
        return num_a > num_b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num_a = boost::any_cast<int>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return num_a > std::stoll(str_b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double num_a = boost::any_cast<double>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return num_a > std::stod(str_b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return std::stoll(str_a) > num_b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);
        return std::stod(str_a) > num_b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a > str_b ? a : b;
    }
    else if (a.convert_to(b) || 
             a.type() == typeid(int) && a.convert_to(boost::any(typeid(double))) ||
             a.type() == typeid(double) && a.convert_to(boost::any(typeid(int))) ||
             a.type() == typeid(std::string) && a.convert_to(boost::any(typeid(int))) || 
             a.type() == typeid(std::string) && a.convert_to(boost::any(typeid(double)))) {
        return "None";
    }
    return a > b ? a : b;
}