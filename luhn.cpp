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
    vector<int> digits = {3, 4, 5, 1, 7, 2, 8, 6, 1, 6, 9, 3, 9, 8, 0, 2};
    int result = luhn(digits);
    cout << "Luhn check result: " << result << endl;
    return 0;
}