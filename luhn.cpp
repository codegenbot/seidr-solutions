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
    vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1};
    int result = luhn(digits);
    cout << "The sum is: " << result;
    return 0;
}