#include <iostream>
#include<string>
#include<regex>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int b_int = stoi(b.convert_to<string>().substr(0, b.convert_to<string>().find(',')));
        return b.convert_to<string>();
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double a_double = stod(a.convert_to<string>());
        double b_double = stod(b.convert_to<string>().substr(0, b.convert_to<string>().find(',')));
        return b.convert_to<string>() > to_string(a_double) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = stoi(a.substr(0, a.find(',')));
        int b_int = b.convert_to<int>();
        return a_int >= b_int ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double a_double = stod(a.substr(0, a.find(',')));
        double b_double = b.convert_to<double>();
        return a_double >= b_double ? a : boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = a.convert_to<int>();
        int b_int = b.convert_to<int>();
        return a_int >= b_int ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double a_double = a.convert_to<double>();
        double b_double = b.convert_to<double>();
        return a_double >= b_double ? a : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}