#include <boost/any.hpp>
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end()) > 0 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = any_cast<int>(a);
        string str2 = any_cast<string>(b);
        return num1 > stoi(str2) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = any_cast<string>(a);
        int num2 = any_cast<int>(b);
        return stoi(str1) > num2 ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double num1 = any_cast<double>(a);
        string str2 = any_cast<string>(b);
        return num1 > stod(str2) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str1 = any_cast<string>(a);
        double num2 = any_cast<double>(b);
        return stod(str1) > num2 ? a : b;
    }
    return boost::any("None");
}

int main() {
    try {
        boost::any a = boost::any("Hello");
        boost::any b = boost::any(123.45);

        boost::any result = compare_one(a, b);
        
        if (result.type() == typeid(string)) {
            cout << "The result is: " << any_cast<string>(result) << endl;
        } else if (result.type() == typeid(double)) {
            cout << "The result is: " << any_cast<double>(result) << endl;
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}