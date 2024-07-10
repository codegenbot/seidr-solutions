#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    return num_str.substr(n - shift) + num_str.substr(0, n - shift);
}

assert(circular_shift(11, 101) == "11");

return 0;