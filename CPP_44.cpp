#include <iostream>
#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0) return "0";
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder < 10)
            result = to_string(remainder) + result;
        else
            result = char('A' + remainder - 10) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 255, base = 16;
    cout << "255 in base 16 is " << change_base(x, base) << endl;
    return 0;
}