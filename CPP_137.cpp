#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a.get<int>() > (int)b.get<float()) ? b : (a.get<int>() > 0 ? &a : &b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (float)a.get<float>() > stod(str) ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a), s2 = boost::any_cast<string>(b);
        return stod(s2) > stod(s1) ? &b : (s1 == s2 ? boost::any("None") : &a);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (int)a.get<int>() > stod(str) ? &a : &b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.get<float>() > (int)b.get<int>() ? &a : &b;
    }
    return boost::any("None");
}