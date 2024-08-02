#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    string res = "";
    for (int i = 0; i < n; i++) {
        if (i < shift)
            res += str[n - 1 - i];
        else
            res += str[i - shift];
    }
    return res;
}