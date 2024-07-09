```
#include <string>
#include <iostream>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder > 9)
            res.insert(0, to_string(remainder + 10).c_str()); 
        else
            res.insert(0, to_string(remainder).c_str());
        x /= base;
    }
    return res;
}

int main() {
    int x, base;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter the base (2-16): ";
    cin >> base;
    cout << change_base(x, base) << endl;
}