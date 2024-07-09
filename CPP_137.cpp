```cpp
#include <iostream>
#include <string>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        if (stod(a_str) > stod(b_str)) {
            return a;
        }
        else if (stod(a_str) < stod(b_str)) {
            return b;
        }
       	else {
            return "None";
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        double a_num = stod(to_string(a_int));
        double b_num = stod(b_str);
        if (a_num > b_num) {
            return a;
        }
       	else if (a_num < b_num) {
            return b;
        }
		else {
            return "None";
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        int b_int = boost::any_cast<int>(b);
        if (a_int > b_int) {
            return a;
        }
		else if (a_int < b_int) {
            return b;
        }
		else {
            return "None";
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        double a_num = boost::any_cast<double>(a);
        int b_int = boost::any_cast<int>(b);
        if (a_num > b_int) {
            return a;
        }
		else if (a_num < b_int) {
            return b;
        }
		else {
            return "None";
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        double a_num = boost::any_cast<double>(a);
        double b_num = boost::any_cast<double>(b);
        if (a_num > b_num) {
            return a;
        }
		else if (a_num < b_num) {
            return b;
        }
		else {
            return "None";
        }
    }
    else {
        return "None";
    }
}