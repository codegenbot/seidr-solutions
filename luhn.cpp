#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = cardNumber[i] * 2;
            if (digit > 9) digit -= 9;
            sum += digit;
            doubleNext = false;
        } else {
            sum += cardNumber[i];
            doubleNext = !doubleNext;
        }
    }
    
    return sum;
}

int main() {
    vector<int> cardNumber = {4, 5, 2, 7, 1, 3, 6, 9, 0, 8, 4, 1, 6, 3, 5, 9};
    int result = luhn(cardNumber);
    cout << "The Luhn verification sum is: " << result << endl;
    return 0;
}