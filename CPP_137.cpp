#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = std::any_cast<double>(a);
        string db = std::any_cast<string>(b);
        return (da > stod(db)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = std::any_cast<double>(b);
        string db = std::any_cast<string>(a);
        return (stod(db) > da) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string da = std::any_cast<string>(a);
        string db = std::any_cast<string>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double da = std::any_cast<double>(a);
        double db = std::any_cast<double>(b);
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
    cout << compare_one(any(1), any(2.5)) << endl;
    cout << compare_one(any(1), any("2,3")) << endl;
    cout << compare_one(any("5,1"), any("6")) << endl;
    cout << compare_one(any("1"), any(1)) << endl;
    return 0;
}