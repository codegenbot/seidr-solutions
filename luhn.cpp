#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < 16; i++) {
        int digit = digits[i];
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