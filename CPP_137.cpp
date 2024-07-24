#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>
#include<boost/any.hpp>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        string db = boost::any_cast<string>(b);
        if (da > stod(db))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = boost::any_cast<double>(b);
        string db = boost::any_cast<string>(a);
        if (stod(db) > da)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string da = boost::any_cast<string>(a);
        string db = boost::any_cast<string>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    }
    return "None";
}

int main() {
    cout << boost::any_cast<any>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<string>(compare_one(1, "2,3")) << endl;
    cout << boost::any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << boost::any_cast<string>(compare_one("1", 1)) << endl;
    return 0;
}