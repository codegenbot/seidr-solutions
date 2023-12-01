#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = char(remainder + '0') + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x;
    cin >> x;
    cout << change_base(x, x + 1) << endl;
    return 0;
}