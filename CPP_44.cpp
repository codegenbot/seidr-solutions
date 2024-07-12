#include <iostream>
#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0) return "0";
    string res = "";
    while (x > 0) {
        int temp = x % base;
        if (temp > 9) {
            res.insert(0, 1, (char)(temp - 10 + 'A'));
        } else {
            res.insert(0, 1, to_string(temp));
        }
        x /= base;
    }
    return res;
}

int main() {
    cout << change_base(8, 3) << endl; // prints "22"
    cout << change_base(8, 2) << endl; // prints "1000"
    cout << change_base(7, 2) << endl; // prints "111"
    return 0;
}