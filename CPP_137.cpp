#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        if (s1 == s2)
            return boost::any("None");
        else if (stof(s1) < stof(s2))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        if (i1 < i2)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f1 = boost::any_cast<float>(a);
        int i2 = boost::any_cast<int>(b);
        if (f1 < i2)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        if (f1 < f2)
            return a;
        else
            return b;
    }
    else {
        return boost::any("None");
    }
}