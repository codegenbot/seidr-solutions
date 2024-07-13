```c++
#include <vector>
#include <iostream>

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
    vector<int> digits = {3,4,5,1,3,8,6,7,2,1,1};
    int result = luhn(digits);
    cout << "The sum is: " << result;
    return 0;
}