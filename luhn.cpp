```cpp
#include <vector>
using namespace std;

int main() {
    cout << luhn({4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5}); 
    return 0;
}

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}