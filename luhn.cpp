#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * 10;
        if (doubleNext) {
            digit += digit / 10;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum % 10 == 0;
}

int main() {
    vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1};
    cout << luhn(digits) << endl;
    return 0;
}