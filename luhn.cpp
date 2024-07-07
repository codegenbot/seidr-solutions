```cpp
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
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
    vector<int> digits = {3, 4, 9, 0, 5, 5, 4, 0, 2, 1, 7, 6, 3, 5, 8};
    cout << "The Luhn check value is: " << luhn(digits) << endl;
    return 0;
}