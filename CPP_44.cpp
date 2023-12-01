#include <iostream>
#include <string>

string change_base(int x, int base) {
    string result = "";

    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x /= base;
    }

    return result;
}

int main() {
    int x, base;
    cin >> x >> base;
    string result = change_base(x, base);
    cout << result << endl;
    return 0;
}