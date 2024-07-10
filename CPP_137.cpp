#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stoi(y) > x) ? b : ((x > stoi(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(x) > stod(y)) ? a : ((stod(y) > stod(x)) ? b : boost::any("None"));
    } else {
        return "Invalid input";
    }
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    boost::any a = typeid(int);
    boost::any b = typeid(float);

    boost::any result = compare_one(a, b);

    if (boost::any_cast<string>(result) == "None") {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The first number is greater." << endl;
    }

    return 0;
}