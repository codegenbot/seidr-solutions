#include <string>
#include <cmath>

any_to_string(any a) {
    if (a.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        return to_string(x);
    }
    else if (a.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        return to_string(x);
    }
    else if (a.type() == typeid(string) || a.type() == typeid(wstring)) {
        string x = boost::any_cast<string>(a);
        return x;
    }
}