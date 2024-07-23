#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int i = stoi(s);
        return (int)a > i ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return stoi(s) > i ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        return stof(s) > f ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = boost::any_cast<double>(a);
        string s = boost::any_cast<string>(b);
        return stod(s) > d ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return stof(sa) > stof(sb) ? a : (stof(sa) < stof(sb) ? b : "None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return (double)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d = stod(s);
        return (double)a > d ? a : b;
    }
    else {
        return "None";
    }
}