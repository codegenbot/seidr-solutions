#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * 10 + (i % 2 != 0);
        if (digit > 9) digit -= 9;
        sum += digit;
    }
    return sum;
}

int main() {
    vector<int> digits = {3,4,5,1,3,6,7,8,9,4,5,5};
    cout << luhn(digits) << endl;
    return 0;
}