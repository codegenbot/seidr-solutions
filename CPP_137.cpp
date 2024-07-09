#include <iostream>
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
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        int compare_result = str1.compare(str2);
        if (compare_result > 0) {
            return a;
        }
        else if (compare_result < 0) {
            return b;
        }
       	else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double a_num = stod(a.convert_to<string>());
        string str = b.convert_to<string>();
        int compare_result = str.compare(to_string(a_num));
        if (compare_result > 0) {
            return a;
        }
       	else if (compare_result < 0) {
            return b;
        }
		else {
            return boost::any("None");
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
            return boost::any("None");
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
            return boost::any("None");
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
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}