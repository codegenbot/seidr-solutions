#include <string>

string circular_shift(int x, int shift);

int main() {
    // Test cases
    cout << circular_shift(12345, 2) << endl;  // Expected output: "45123"
    cout << circular_shift(987654321, 5) << endl;  // Expected output: "543219876"
    cout << circular_shift(123, 10) << endl;  // Expected output: "321"
    
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