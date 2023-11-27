#include <string>

string circular_shift(int x, int shift);

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}