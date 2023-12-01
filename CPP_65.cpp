#include <string>

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int len = num.length();

    if (shift > len) {
        reverse(num.begin(), num.end());
        return num;
    }

    shift = shift % len;
    string res = num.substr(len - shift) + num.substr(0, len - shift);
    return res;
}

int main() {
    int x, shift;
    cin >> x >> shift;
    string result = circular_shift(x, shift);
    cout << result;
    return 0;
}