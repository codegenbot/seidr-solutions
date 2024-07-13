```c++
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
    vector<int> card = {4, 5, 2, 7, 1, 3, 6, 8, 9, 4, 0, 6, 8, 2, 9, 5};
    cout << "Luhn check result: " << luhnCheck(card) << endl;
    return 0;
}