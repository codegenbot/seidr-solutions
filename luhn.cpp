#include <vector>
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
    vector<int> card = {4, 3, 2, 1, 3, 5, 4, 0, 6, 7, 8, 9, 1, 2, 3, 4};
    cout << "Luhn check result: " << luhnCheck(card) << endl;
    return 0;
}