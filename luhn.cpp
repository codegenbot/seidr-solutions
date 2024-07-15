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
    vector<int> cardNumber = {4,5,3,9,2,6,5,3,8,7,1,6,4};
    int result = luhnCheck(cardNumber);
    cout << "The Luhn check result is: " << result << endl;
    return 0;
}