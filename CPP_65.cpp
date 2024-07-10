#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(abs(x));
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return to_string(x);
    }
    if (shift > n) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    string result = num_str.substr(n - shift) + num_str.substr(0, n - shift);
    return (x < 0) ? "-" + result : result;
}