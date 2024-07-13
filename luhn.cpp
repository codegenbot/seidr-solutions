#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9) {
                doubleValue -= 9;
            }
            sum += doubleValue;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}