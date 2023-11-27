#include <iostream>
#include <string>

using namespace std;

string change_base(int x, int base);

int main() {
    int x;
    cin >> x;

    cout << change_base(x, x + 1) << endl;
}

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}