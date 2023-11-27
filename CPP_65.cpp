#include <string>
#include <cassert>

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}

int main() {
    int x, shift;
    cin >> x >> shift;
    string result = circular_shift(x, shift);
    cout << result << endl;
    return 0;
}