#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b) > (int)a ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<double>(b) > (int)a ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<float>(a) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str2 > str1 ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return stoi(str) > num ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return stof(str) > num ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return stod(str) > num ? b : a;
    }
    return "None";
}