#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        
        alternate = !alternate;
    }
    
    return sum;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    // Calculate the result using Luhn's algorithm
    int res = luhn(digits);

    cout << res << endl;

    return 0;
}