#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(a > boost::any_cast<float>(b));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(a > boost::any_cast<double>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return boost::any(stoi(str) > num);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<float>(a) > boost::any_cast<int>(b));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<double>(a) > boost::any_cast<int>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);
        return boost::any(stof(str) > num);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        return boost::any(stod(str) > num);
    }
    return boost::any("None");
}