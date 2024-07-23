#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        return num > stoi(str) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        return stoi(str) > num ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(b);
        string str = boost::any_cast<string>(a);
        return stof(str) > f ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = boost::any_cast<double>(b);
        string str = boost::any_cast<string>(a);
        return stod(str) > d ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return num > stoi(str) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double d = boost::any_cast<double>(a);
        int num = boost::any_cast<int>(b);
        return d > num ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return (double)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stod(str1) > stod(str2) ? a : b;
    }
    else {
        return "None";
    }
}