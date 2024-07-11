#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        double num2 = stod(boost::any_cast<string>(b));
        return str1 > to_string(num2) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        return str1 > to_string(num2) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str1 = boost::any_cast<string>(a);
        double num2 = boost::any_cast<double>(b);
        return str1 > to_string(num2) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return s1 > s2 ? a : b;
    }
    else {
        return "None";
    }
}

int main() {
    // test cases
    cout << compare_one(1, 2.5) << endl;  // output: 2.5
    cout << compare_one(1, "2,3") << endl; // output: 2,3
    cout << compare_one("5,1", "6") << endl; // output: 6
    cout << compare_one("1", 1) << endl; // output: None

    return 0;
}