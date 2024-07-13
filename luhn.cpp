#include <vector>
using namespace std;

int luhnCheck(vector<int> creditCardNumber) {
    int sum = 0;
    bool alternate = false;
    for (int i = creditCardNumber.size() - 1; i >= 0; i--) {
        int digit = creditCardNumber[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}