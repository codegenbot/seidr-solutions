#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n) {
        return str;
    }
    string result = "";
    for (int i = 0; i < n; i++) {
        if (i < shift) {
            result += str[n - 1 - (i % n)];
        } else {
            result += str[i - shift];
        }
    }
    return result;
}