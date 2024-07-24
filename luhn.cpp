#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
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
    int n;
    cin >> n;
    vector<int> digits(n);
    for (auto &i : digits) {
        cin >> i;
    }
    cout << luhn(digits) << endl;
    return 0;
}