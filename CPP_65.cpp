#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    } else {
        string shifted = str.substr(n - shift) + str.substr(0, n - shift);
        return shifted;
    }
}

int main() {
    int num1 = 1234;
    int shift1 = 2;
    string result1 = circular_shift(num1, shift1);
    cout << result1 << endl;

    int num2 = 98765;
    int shift2 = 4;
    string result2 = circular_shift(num2, shift2);
    cout << result2 << endl;

    return 0;
}