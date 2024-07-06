#include <boost/any.hpp>
#include <boost/convert.hpp>
#include <string>

std::string compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = a.convert_to<std::string>();
        int num_b = (int)b;
        return str_a.size() > std::to_string(num_b).size() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str_b = b.convert_to<std::string>();
        double num_a = (double)a;
        return str_b.size() > std::to_string(num_a).size() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = a.convert_to<std::string>();
        int num_b = (int)b;
        return str_a.size() > std::to_string(num_b).size() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = a.convert_to<std::string>();
        double num_b = (double)b;
        return str_a.size() > std::to_string(num_b).size() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = a.convert_to<std::string>();
        std::string str_b = b.convert_to<std::string>();
        return str_a.size() > str_b.size() ? "First is greater" : "Second is greater";
    }
    else if (a.type() == typeid(int) && a.convert_to<int>() < (int)b || 
             a.type() == typeid(double) && a.convert_to<double>() < (double)b || 
             a.type() == typeid(std::string) && a.convert_to<std::string>() < b) {
        return "None";
    }
    return "Both are equal";
}