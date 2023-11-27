#include <string>

string change_base(int x, int base);

#include <iostream>
using namespace std;

int main() {
    int x, base;
    cin >> x >> base;
    cout << change_base(x, base) << endl;
    return 0;
}

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}