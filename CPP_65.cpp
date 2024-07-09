#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift > n) {
        shift %= n;
    }
    return str.substr(n - shift) + str.substr(0, n - shift);
}

int main() {
    cout << circular_shift(12, 1) << endl; // Output: "21"
    cout << circular_shift(12, 2) << endl; // Output: "12"
    return 0;
}