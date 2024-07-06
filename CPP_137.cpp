#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str_b = boost::any_cast<string>(b);
        double num_a = boost::any_cast<double>(a);
        return str_b.size() > to_string(num_a).size() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str_a = boost::any_cast<string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str_a = boost::any_cast<string>(a);
        double num_b = boost::any_cast<double>(b);
        return str_a.size() > to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return str_a.size() > str_b.size() ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to(b) || 
             a.type() == typeid(double) && a.convert_to(b) || 
             a.type() == typeid(string) && a.convert_to(b)) {
        return "None";
    }
    return a > b ? a : b;
}