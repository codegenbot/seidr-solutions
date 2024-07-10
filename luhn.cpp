#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((digits[i] * 2) > 9) {
            sum += (digits[i] * 2) - 9;
        } else {
            sum += digits[i] * 2;
        }
        sum += digits[i-1];
    }
    return sum;
}