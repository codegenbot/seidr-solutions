#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return a.convert_to(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        int b_int = boost::any_cast<int>(b);
        return a_int > b_int ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double a_double = boost::any_cast<double>(a);
        double b_double = boost::any_cast<double>(b);
        return a_double > b_double ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a.size() > str_b.size() ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to(b)) {
        return "None";
    }
    else if (a.type() == typeid(double) && a.convert_to(b)) {
        return "None";
    }
    else if (a.type() == typeid(std::string) && a.convert_to(b)) {
        return "None";
    }
    return a > b ? a : b;
}