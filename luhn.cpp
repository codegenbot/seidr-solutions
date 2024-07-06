
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int d = digits[i] * 2;
        if (d > 9) {
            d -= 9;
        }
        sum += d;
    }
    return sum % 10;
}
int main() {
    vector<int> digits = {9, 2, 6, 8, 9, 7, 3, 4, 2, 3, 9, 6, 0, 8, 9, 6};
    cout << luhn(digits) << endl;
    return 0;
}