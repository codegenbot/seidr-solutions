#include <vector>
using namespace std;

int luhn(const vector<int>& cardNum) {
    int sum = 0;
    bool odd = false;

    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i] * (odd ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        odd = !odd;
    }

    return sum;
}