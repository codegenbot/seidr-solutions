#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cardNumber) {
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
    vector<int> cardNumber = {3, 4, 5, 1, 7, 2, 8, 6, 5, 9, 4, 3, 8, 2, 0, 1};
    int result = luhnCheck(cardNumber);
    cout << "The Luhn check result is: " << result << endl;
    return 0;
}