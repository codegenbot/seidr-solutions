#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

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
        if (strA > strB) {
            return a;
        }
        else if (strA < strB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float numA = boost::any_cast<float>(a);
        int numB = boost::any_cast<int>(b);
        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int numA = boost::any_cast<int>(a);
        float numB = boost::any_cast<float>(b);
        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}