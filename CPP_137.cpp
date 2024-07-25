#include <any>
#include <string>
#include <locale>
using namespace std;

namespace std {

any a;
any b;

bool compareAny(const any& x) {
    if (x.type() == typeid(int)) {
        int value = any_cast<int>(x);
        return &compareAnyImpl<int>;
    } else if (x.type() == typeid(double)) {
        double value = any_cast<double>(x);
        return &compareAnyImpl<double>;
    } else if (x.type() == typeid(string) || x.type() == typeid(wstring)) {
        string value = any_cast<string>(x);
        return &compareAnyImpl<string>;
    }

    // default case
    return &compareAnyImpl<int>;
}

template<typename T>
bool compareAnyImpl(T value) {
    if (!a.type() || !b.type()) {
        return false;
    }

    bool isInt = (a.type() == typeid(int)) && (b.type() == typeid(int));
    bool isDouble = (a.type() == typeid(double)) && (b.type() == typeid(double));
    bool isString = ((a.type() == typeid(string)) || (a.type() == typeid(wstring))) &&
                    ((b.type() == typeid(string)) || (b.type() == typeid(wstring)));

    if (isInt) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return x > y;
    } else if (isDouble) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return x > y;
    } else if (isString) {
        string x = any_cast<string>(a);
        string y = any_cast<string>(b);
        return x > y;
    }

    // default case
    return true;
}

int main() {
    // read input from user
    cout << "Enter two values to compare: ";
    cin >> a >> b;

    if (compareAny(a) && compareAny(b)) {
        if (a > b) {
            return 1;
        } else if (a < b) {
            return -1;
        }
        return 0;
    }

    // handle invalid input
    cout << "Invalid input. Please enter two values of the same type." << endl;

    return 2;
}