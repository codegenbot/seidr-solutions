#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> cardNumber) {
    int sum = 0;
    bool doubleDigit = false;
    
    for (int i = 15; i >= 0; --i) {
        if (doubleDigit) {
            int doubled = cardNumber[i] * 2;
            
            if (doubled > 9)
                sum += (doubled % 10) + 1;
            else
                sum += doubled;
        } else {
            sum += cardNumber[i];
        }
        
        doubleDigit = !doubleDigit;
    }
    
    return sum;
}