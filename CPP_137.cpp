#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > (float)boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stoll(str) > num ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<float>(a) > (int)boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)boost::any_cast<double>(a) > (int)boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = (float)boost::any_cast<int>(b);
        return stof(str) > num ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = (double)boost::any_cast<int>(b);
        return stod(str) > num ? a : b;
    }
    return "None";
}