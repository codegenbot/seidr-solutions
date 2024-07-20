#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    return num.substr(n - shift) + num.substr(0, n - shift);
}

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}