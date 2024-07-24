#include <vector>
using namespace std;

int luhn(const vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}