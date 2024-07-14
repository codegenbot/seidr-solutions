#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool alternate = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        
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
    // Your code here to read input from user and print the output
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for (int i = 0; i < n; ++i) {
        cin >> cardNumber[i];
    }
    cout << luhn(cardNumber) << endl;
    
    return 0;
}