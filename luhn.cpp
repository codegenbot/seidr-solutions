```cpp
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
    vector<int> cardNumber = {4, 5, 3, 0, 8, 7, 1, 6, 2, 0, 9, 9, 8, 5, 5, 6};
    cout << luhnAlgorithm(cardNumber) << endl;
    return 0;
}