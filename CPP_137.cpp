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
    int x;
    float y;
    cout << "Enter number 1: ";
    cin >> x;
    
    string str;
    cout << "Enter the type of number 2 (float or string): ";
    cin >> str;

    if(str == "float")
        cin >> y;
    else
        cin.ignore();
        getline(cin, str);

    boost::any a = boost::any(x);
    boost::any b = boost::any(y);

    boost::any result = compare_one(a, b);

    if(result.type() == typeid(string))
        cout << "The result is: " << boost::any_cast<string>(result) << endl;
    else
        cout << "The result is: " << boost::any_cast<int>(result) << endl;

    return 0;
}