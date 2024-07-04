#include <iostream>
#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0) return "0";
    if (base < 2 || base > 36) return "Error: Base out of range";

    string result = "";
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (x > 0) {
        result = digits[x % base] + result;
        x /= base;
    }
    return result;
}

int main() {
    int x, base;
    cout << "Enter number and base: ";
    cin >> x >> base;
    cout << "Result: " << change_base(x, base) << endl;
    return 0;
}