#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        float fB = boost::any_cast<float>(b);
        if (strA == "0,") {
            return a;
        }
        else if (fB > stof(strA)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int iB = boost::any_cast<int>(b);
        if (strA == "0,") {
            return a;
        }
        else if (stof(strA) > iB) {
            return a;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float fB = boost::any_cast<float>(b);
        if (strA == "0,") {
            return a;
        }
        else if (stof(strA) > fB) {
            return a;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA == "0," && strB != "0,") {
            return b;
        }
        else if (strA != "0," && stof(strA) > stof(strB)) {
            return a;
        }
        else {
            return "None";
        }
    }
    else {
        return "None";
    }
}