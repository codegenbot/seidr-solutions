```
#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    shift %= n;
    if (shift >= n / 2)
        shift = n - shift;
    return str.substr(shift) + str.substr(0, shift);
}

int main() {
    cout << circular_shift(12, 1) << endl; // "21"
    cout << circular_shift(12, 2) << endl; // "12"
    cout << circular_shift(12345, 3) << endl; // "23451"
    return 0;
}