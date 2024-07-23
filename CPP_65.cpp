#include <string>

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string res = str.substr(shift % n) + str.substr(0, shift % n);
        return res;
    }
}