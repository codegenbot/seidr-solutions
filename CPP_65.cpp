#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift %= n;
    
    if (shift == 0) {
        return str;
    } else {
        reverse(str.begin(), str.end());
        reverse(str.begin(), str.begin() + shift);
        reverse(str.begin() + shift, str.end());
        return str;
    }
}