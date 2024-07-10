#include <bits/stdc++.h>
using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}

string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    }
    if (shift > n) {
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    string result = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    return result;
}