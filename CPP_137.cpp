#include <any>
namespace std {

any a;
any b;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = any_cast<int>(a);
    int y = any_cast<int>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = any_cast<double>(a);
    double y = any_cast<double>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    string x = any_cast<string>(a);
    string y = any_cast<string>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(double))) {
    string x = any_cast<string>(a);
    double y = any_cast<double>(b);
    if (stod(x) > y) return a;
    else if (stod(x) < y) return b;
    else return a;
} else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    double x = any_cast<double>(a);
    string y = any_cast<string>(b);
    if (x > stod(y)) return a;
    else if (x < stod(y)) return b;
    else return a;
} else {
    return a;
}
}