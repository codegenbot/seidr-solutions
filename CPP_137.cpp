#include <boost/lexical_cast.hpp>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        if (fa > fb)
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (sa > sb)
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float fb = boost::any_cast<float>(b);
        if (fb < 0)
            return boost::any(b);
        else
            return boost::any(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        if (ai > 0)
            return boost::any(a);
        else
            return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float af = boost::lexical_cast<float>(boost::any_cast<string>(a));
        float bf = boost::any_cast<float>(b);
        if (af > bf)
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        if (af > 0)
            return a;
        else
            return boost::any(b);
    }
    return boost::any();
}