#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convertible_to<string>()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        float fB = boost::any_cast<float>(b);
        return (fB > stof(strA)) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int iB = boost::any_cast<int>(b);
        string strA = boost::any_cast<string>(a);
        return (stof(strA) > iB) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fB = boost::any_cast<float>(b);
        string strA = boost::any_cast<string>(a);
        return (stof(strA) > fB) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return (stof(strA) > stof(strB)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        return (iA > iB) ? a : b;
    }
    else {
        return "None";
    }
}