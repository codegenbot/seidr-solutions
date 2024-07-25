#include <vector>
using namespace std;

int Luhn(vector<int> cardNumber) {
    int sum = 0;
    bool isSecond = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int num = cardNumber[i];
        
        if (!isSecond) {
            num *= 2;
            if (num > 9)
                num -= 9;
        }
        
        sum += num;
        isSecond = !isSecond;
    }
    
    return sum;
}