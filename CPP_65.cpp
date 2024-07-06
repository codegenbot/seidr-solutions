#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.length();
    if (shift >= n) {
        return s;
    }
    string result = "";
    for (int i = shift; i < n; i++) {
        result += s[i];
    }
    for (int i = 0; i < shift; i++) {
        result = s[n - 1 - i] + result;
    }
    return result;
}