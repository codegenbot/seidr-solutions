```cpp
#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>

using namespace std;

any compare_one(any a, any b) {
    if (a.type() == type_id<double>() && b.type() == type_id<string>()) {
        double da = any_cast<double>(a);
        string db = any_cast<string>(b);
        if (da > stod(db))
            return a;
        else
            return b;
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<double>()) {
        double da = any_cast<double>(b);
        string db = any_cast<string>(a);
        if (stod(db) > da)
            return a;
        else
            return b;
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        string da = any_cast<string>(a);
        string db = any_cast<string>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    }
    else if (a.type() == type_id<double>() && b.type() == type_id<double>()) {
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
    cout << compare_one(1.0, 2.5) << endl;
    cout << compare_one(1.0, "2.3") << endl;
    cout << compare_one("5.1", "6.0") << endl;
    cout << compare_one("1.0", 1.0) << endl;
    return 0;
}