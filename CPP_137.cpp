#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA == "None") return "None";
        if (strB == "None") return "None";
        return strA > strB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float fB = boost::any_cast<float>(b);
        if (strA == "None") return "None";
        return strA > to_string(fB) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        if (strB == "None") return "None";
        return to_string(fA) > strB ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int iA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        if (strB == "None") return "None";
        return to_string(iA) > strB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int iB = boost::any_cast<int>(b);
        if (strA == "None") return "None";
        return strA > to_string(iB) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        return iA > iB ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fA = boost::any_cast<float>(a);
        float fB = boost::any_cast<float>(b);
        return fA > fB ? a : b;
    }
    return "None";
}