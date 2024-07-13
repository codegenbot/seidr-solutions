#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);

        if (num > stof(str))
            return b;
        else
            return a;
    }
    else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);

        if (num > stof(str))
            return a;
        else
            return b;
    }
    else {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
}