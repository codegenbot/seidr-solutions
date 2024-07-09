```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        if (stod(strA.c_str()) > to_string(numB).c_str()) {
            return a;
        } else if (stod(strA.c_str()) < to_string(numB).c_str()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strA = boost::any_cast<string>(a);
        double numB = boost::any_cast<double>(b);
        if (stod(strA.c_str()) > to_string(numB).c_str()) {
            return a;
        } else if (stod(strA.c_str()) < to_string(numB).c_str()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (stod(strB.c_str()) > stod(strA.c_str())) {
            return b;
        } else if (stod(strB.c_str()) < stod(strA.c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        if (numA > stoi(strB.c_str())) {
            return a;
        } else if (numA < stoi(strB.c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        if (numA > stod(strB.c_str())) {
            return a;
        } else if (numA < stod(strB.c_str())) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        if (numA > numB) {
            return a;
        } else if (numA < numB) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}