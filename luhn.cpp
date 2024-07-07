#include <vector>
using namespace std;

int luhn(vector<int>& cardNum) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = cardNum.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = cardNum[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += cardNum[i];
            doubleNext = true;
        }
    }
    return sum;
}