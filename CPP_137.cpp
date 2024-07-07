#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        istringstream iss(str1);
        double num1;
        iss >> num1;
        istringstream iss2(str2);
        double num2;
        iss2 >> num2;
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        istringstream iss(str);
        double num;
        iss >> num;
        return b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        boost::any temp = a;
        a = b;
        b = temp;
    }
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return boost::any("None");
    }
}