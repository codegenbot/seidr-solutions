#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>() > b.convert<string>() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return x > stoi(y) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        string y = boost::any_cast<string>(a);
        return stoi(y) > x ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return x > stof(y) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(b);
        string y = boost::any_cast<string>(a);
        return stof(y) > x ? a : b;
    }
    return "None";
}