#include<stdio.h>
#include<string>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    int len = s.length();
    if (shift > len) {
        reverse(s.begin(), s.end());
        return s;
    }
    shift = shift % len;
    return s.substr(len - shift) + s.substr(0, len - shift);
}