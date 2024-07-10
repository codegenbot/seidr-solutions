#include <vector>

int luhn(vector<int> cc) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cc.size() - 1; i >= 0; --i) {
        int digit = cc[i];
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