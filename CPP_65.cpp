/*
Circular shift the digits of the integer x, shift the digits right by shift
and return the result as a string.
If shift > number of digits, return digits reversed.
>>> circular_shift(12, 1)
"21"
>>> circular_shift(12, 2)
"12"
*/
#include<stdio.h>
#include<string>
using namespace std;
string circular_shift(int x,int shift){
    int length = 0;
    int num = x;
    string result = "";
    while (num != 0) {
        length++;
        num /= 10;
    }
    if (shift > length) {
        for (int i = 0; i < length; i++) {
            result = to_string(x % 10) + result;
            x /= 10;
        }
    } else {
        for (int i = 0; i < shift; i++) {
            result = to_string(x % 10) + result;
            x /= 10;
        }
        result = to_string(x) + result;
    }
    return result;
}
