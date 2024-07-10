#include <vector>
using namespace std;

int luhn(vector<int> num) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = num.size() - 1; i >= 0; --i) {
        int digit = num[i];
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