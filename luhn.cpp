#include <vector>
using namespace std;

int luhn(vector<int> cardNum) {
    int sum = 0;
    bool doubleIt = false;
    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i];
        if (doubleIt) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleIt = !doubleIt;
    }
    return sum;
}