#include <iostream>
#include <string>
#include <any>
#include <sstream>

using namespace std;

any compare_one(any a, any b) {
    if (a.type() == any_type<double> && b.type() == any_type<string>) {
        double da = any_cast<double>(a);
        string db = any_cast<string>(b);
        if (da > stod(db))
            return a;
        else
            return b;
    }
    else if (a.type() == any_type<string> && b.type() == any_type<double>) {
        double da = any_cast<double>(b);
        string db = any_cast<string>(a);
        if (stod(db) > da)
            return a;
        else
            return b;
    }
    else if (a.type() == any_type<string> && b.type() == any_type<string>) {
        string da = any_cast<string>(a);
        string db = any_cast<string>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    }
    else if (a.type() == any_type<double> && b.type() == any_type<double>) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
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
    cout << any_cast<string>(compare_one(1, 2.5)) << endl;
    cout << any_cast<string>(compare_one(1, "2,3")) << endl;
    cout << any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << any_cast<string>(compare_one("1", 1)) << endl;
    return 0;
}