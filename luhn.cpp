#include <iostream>
#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9)
                doubledDigit -= 9;
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
        doubleNext = !doubleNext; 
    }
    return sum;
}

int main() {
    vector<int> digits = {4,3,2,1,0,9,8,7,6,5,4,3,2,1,0,1};
    cout << "Luhn value is: " << luhn(digits) << endl;
    return 0;
}