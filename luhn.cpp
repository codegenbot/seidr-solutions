#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        digits.push_back(digit);
    }
    reverse(digits.begin(), digits.end());
    int sum = 0;
    for (int i = 0; i < 15; i++) {
        if (i % 2 != 0) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
    }
    cout << sum << endl;
    return 0;
}