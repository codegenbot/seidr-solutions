#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && (b.type() == typeid(string))) {
        string str = boost::any_cast<string>(b);
        float num = stof(str);
        if (a.convert_to<float>() > num)
            return a;
        else
            return b;
    }
    else if ((a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = boost::any_cast<string>(a);
        float num = stof(str);
        if (boost::any_cast<float>(b) > num)
            return b;
        else
            return a;
    }
    else
        return boost::any("None");
}