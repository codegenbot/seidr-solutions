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
    }
    
    shift = shift % n;
    reverse(str.begin(), str.begin() + n - shift);
    reverse(str.begin() + n - shift, str.end());
    reverse(str.begin(), str.end());
    
    return str;
}