#include <iostream>
#include <string>
#include <boost/any.hpp>

bool compareOne(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num_b = boost::any_cast<int>(b);
        std::string str_a = boost::any_cast<std::string>(a);
        return str_a.size() > std::to_string(num_b).size();
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double num_a = boost::any_cast<double>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_b.size() > std::to_string(num_a).size();
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num_b = boost::any_cast<int>(b);
        std::string str_a = boost::any_cast<std::string>(a);
        return str_a.size() > std::to_string(num_b).size();
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double num_b = boost::any_cast<double>(b);
        std::string str_a = boost::any_cast<std::string>(a);
        return str_a.size() > std::to_string(num_b).size();
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a.size() > str_b.size();
    }
    else if (a.convert_to(b) || b.convert_to(a)) {
        return true;
    }
    return false;
}