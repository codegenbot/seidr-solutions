#include<stdio.h>
#include<string>
using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    shift = shift % n;
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}