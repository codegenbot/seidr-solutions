#include <iostream>
#include<string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string strA = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        if (strA > to_string(num)) {
            return a;
        } else if (strA < to_string(num)) {
            return boost::any(to_string(num));
        } else {
            return boost::any("None");
        }
    } else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        if (to_string(num) > strB) {
            return a;
        } else if (to_string(num) < strB) {
            return boost::any(strB);
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}

int main() {
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    boost::any a = boost::any(x);
    boost::any b = boost::any(y);

    boost::any result = compare_one(a, b);

    if (boost::any_cast<string>(result) == "None") {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The greater number is: " << boost::any_cast<string>(result) << endl;
    }

    return 0;
}