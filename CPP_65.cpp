#include <string>
#include <cassert>

string circular_shift(int x, int shift) {
    assert(shift >= 0);
    string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    } else {
        string result = num.substr(n - shift) + num.substr(0, n - shift);
        return result;
    }
}