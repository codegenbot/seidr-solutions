#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.length();
    if (shift >= n) {
        reverse(s.begin(), s.end());
        return s;
    }
    shift = shift % n;
    return s.substr(n - shift) + s.substr(0, n - shift);
}