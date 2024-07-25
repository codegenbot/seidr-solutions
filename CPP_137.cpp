#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace boost {
}

namespace boost {
    class any_cast { };
}

any compare_any(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = any_cast<any_cast>(a);
        int y = any_cast<any_cast>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a; 
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = any_cast<any_cast>(a);
        double y = any_cast<any_cast>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a; 
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string x = any_cast<any_cast>(a);
        string y = any_cast<any_cast>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a; 
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(double))) {
        string x = any_cast<any_cast>(a);
        double y = any_cast<any_cast>(b);
        if (stod(x) > y) return a;
        else if (stod(x) < y) return b;
        else return a; 
    }
    else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = any_cast<any_cast>(a);
        string y = any_cast<any_cast>(b);
        if (x > stod(y)) return a;
        else if (x < stod(y)) return b;
        else return a; 
    }
    else {
        return a; 
    }
}

int main() {
    cout << "Result: ";
    cout << compare_any(a, b) << endl;
    return 0;
}