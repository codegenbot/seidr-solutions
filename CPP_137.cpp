#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = boost::lexical_cast<double>(boost::any_cast<string>(a));
        double db = boost::any_cast<double>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        double db = boost::lexical_cast<double>(boost::any_cast<string>(b));
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        if (s1 > s2)
            return a;
        else if (s2 > s1)
            return b;
        else
            return boost::any("None");
    }
    return a;
}