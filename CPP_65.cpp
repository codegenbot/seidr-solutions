#include <string>

string circular_shift(int x, int shift);

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
    // Test the circular_shift function
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}