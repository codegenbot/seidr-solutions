```
#include <vector>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
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

int main() {
    vector<int> digits = {3, 4, 5, 1, 3, 6, 7, 8, 9, 1, 0, 2, 9, 8, 5, 0};
    cout << luhn(digits) << endl;
    return 0;
}