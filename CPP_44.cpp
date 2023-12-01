#include <iostream>
#include <string>
using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x = 10;
    cout << change_base(x, x + 1) << endl;
    return 0;
}