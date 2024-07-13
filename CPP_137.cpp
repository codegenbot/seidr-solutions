#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        istringstream iss(str);
        float num;
        iss >> num;
        return a > num ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (any_cast<string>(a) > any_cast<string>(b))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        return num1 > num2 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        return num1 > num2 ? a : b;
    }
    else
        return boost::any("None");
}