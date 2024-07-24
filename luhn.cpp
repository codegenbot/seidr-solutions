#include <vector>
using namespace std;

int luhn(vector<int>& cardNumber) {
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
    vector<int> cardNumber = {3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8}; 
    cout << luhn(cardNumber) << endl;
    return 0;
}