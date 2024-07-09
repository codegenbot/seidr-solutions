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
    vector<int> cardNumber = {4,3,2,1,8,7,6,5,4,3,2,1};
    cout << luhnAlgorithm(cardNumber) << endl;
    return 0;
}