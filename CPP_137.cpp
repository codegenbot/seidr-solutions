#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a <=> (float) b ? &b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a <=> (double) b ? &b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float) a <=> (double) b ? &b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : (str1 < str2 ? b : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return num > stoi(str) ? a : (num < stoi(str) ? b : "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return num > stof(str) ? a : (num < stof(str) ? b : "None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return num > stod(str) ? a : (num < stod(str) ? b : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stoi(str) > num ? a : (stoi(str) < num ? b : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);
        return stof(str) > num ? a : (stof(str) < num ? b : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        return stod(str) > num ? a : (stod(str) < num ? b : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return num > stoi(str) ? a : (num < stoi(str) ? b : "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return num > stof(str) ? a : (num < stof(str) ? b : "None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return num > stod(str) ? a : (num < stod(str) ? b : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int num = boost::any_cast<int>(a);
        double dnum = boost::any_cast<double>(b);
        return num > dnum ? a : (num < dnum ? b : "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float fnum = boost::any_cast<float>(a);
        double dnum = boost::any_cast<double>(b);
        return fnum > dnum ? a : (fnum < dnum ? b : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return num1 > num2 ? a : (num1 < num2 ? b : "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fnum1 = boost::any_cast<float>(a);
        float fnum2 = boost::any_cast<float>(b);
        return fnum1 > fnum2 ? a : (fnum1 < fnum2 ? b : "None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double dnum1 = boost::any_cast<double>(a);
        double dnum2 = boost::any_cast<double>(b);
        return dnum1 > dnum2 ? a : (dnum1 < dnum2 ? b : "None");
    }
    else {
        return "None";
    }
}