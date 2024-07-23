#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.length();
    if (shift >= n) {
        return s;
    }
    string result = "";
    for (int i = 0; i < n; i++) {
        if (i < shift || i >= n - shift) {
            result += s[i];
        } else {
            result += s[n - shift + i % n];
        }
    }
    return result;
}