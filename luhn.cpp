#include <vector>
#include <iostream>

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
    vector<int> cardNumber = {4,3,2,1,6,7,8,9,4,5};
    int result = luhnCheck(cardNumber);
    cout << "Luhn check result: " << result << endl;
    return 0;
}