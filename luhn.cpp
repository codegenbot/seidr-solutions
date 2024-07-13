#include <vector>
#include <iostream>
using namespace std;

int luhnCheck(const vector<int>& creditCardNumber) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = creditCardNumber.size() - 1; i >= 0; --i) {
        int digit = creditCardNumber[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    vector<int> card = {4, 5, 2, 8, 6, 1, 1, 7, 3, 4, 9, 0, 2, 8, 6, 7};
    cout << "Luhn check result: " << luhnCheck(card) << endl;
    return 0;
}