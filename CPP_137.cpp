```
#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = std::any_cast<double>(a);
        string db = std::any_cast<string>(b);
        if (da > stod(db))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = std::any_cast<double>(b);
        string db = std::any_cast<string>(a);
        if (stod(db) > da)
            return a;
        else
            return b;
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
    cout << std::any_cast<string>(compare_one(1, 2.5)) << endl;
    cout << std::any_cast<string>(compare_one(1, "2,3")) << endl;
    cout << std::any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << std::any_cast<string>(compare_one("1", 1)) << endl;
    return 0;
}