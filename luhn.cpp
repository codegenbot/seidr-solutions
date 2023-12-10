#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int sumOfDoubleEvenPlace(vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i] * 2;
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int num;
        cin >> num;
        digits.push_back(num);
    }

    int sum = sumOfDoubleEvenPlace(digits);
    cout << "The sum of the doubled even-place digits is: " << sum << endl;

    return 0;
}