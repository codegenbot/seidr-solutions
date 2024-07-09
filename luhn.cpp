#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> cardNumber) {
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

int main() {
    vector<int> cardNumber = {3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout << luhnAlgorithm(cardNumber) << endl;
    return 0;
}