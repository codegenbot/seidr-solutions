#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        if (iA > iB)
            return a;
        else if (iA < iB)
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fA = boost::any_cast<float>(a);
        int iB = boost::any_cast<int>(b);
        if (fA > iB)
            return a;
        else
            return b;
    }
    else {
        return boost::any("None");
    }
}