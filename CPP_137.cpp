#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        double numA = stod(strA);
        double numB = stod(strB);

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
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = boost::any_cast<string>(a);

        double num = stod(str);

        if (num > boost::any_cast<double>(b)) {
            return a;
        }
        else if (num < boost::any_cast<double>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);

        double numB = stod(strB);

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
        throw std::runtime_error("Invalid input type");
    }
}