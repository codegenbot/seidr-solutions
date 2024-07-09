```cpp
#include <iostream>
#include <string>
#include <algorithm>
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
        if (stod(str1) > stod(str2)) {
            return a;
        }
        else if (stod(str1) < stod(str2)) {
            return b;
        }
       	else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double a_num = stod(a.convert_to<string>());
        string str2 = b.convert_to<string>();
        int b_int = stoi(str2);
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

int main() {
    // Test cases
    boost::any a = 10; // int
    boost::any b = "20.5"; // string
    cout << compare_one(a, b) << endl;

    a = 3.14; // float
    b = "2"; // string
    cout << compare_one(a, b) << endl;

    a = "10"; // string
    b = "20"; // string
    cout << compare_one(a, b) << endl;

    return 0;
}