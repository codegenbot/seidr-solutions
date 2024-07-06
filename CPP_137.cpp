#include <boost/any.hpp>
#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > boost::str_stoi(to_string(num_b)).size() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str_b = boost::any_cast<std::string>(b);
        double num_a = boost::any_cast<double>(a);
        return str_b.size() > boost::str_stod(to_string(num_a)).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);
        return str_a.size() > to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a.size() > str_b.size() ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to(b) || 
             a.type() == typeid(double) && a.convert_to(b) || 
             a.type() == typeid(std::string) && a.convert_to(b)) {
        return "None";
    }
    return a > b ? a : b;
}