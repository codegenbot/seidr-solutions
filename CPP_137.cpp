#include <boost/any.hpp>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

bool compare(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        cout << "Integers: ";
        if(x > y)
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        cout << "Floats: ";
        if(x > y)
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        cout << "Strings: ";
        if(stod(x) > stod(y))
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        cout << "String-Int: ";
        if(stod(x) > y)
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        cout << "String-Float: ";
        if(stod(x) > y)
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        cout << "Int-String: ";
        if(x > stod(y))
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        cout << "Float-String: ";
        if(x > stod(y))
            return true;
        else
            return false;
    }
    else {
        cout << "Invalid input types";
        return false;
    }
}

int main() {
    any a, b;

    // Ask for user input
    cin >> a >> b;

    bool result = compare(a, b);

    if(result)
        cout << "Greater than or equal" << endl;
    else
        cout << "Less than or equal" << endl;

    return 0;
}