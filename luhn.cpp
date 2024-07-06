#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i--) {
        sum += digits[i];
    }
    return sum % 10;
}
int main() {
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    cout << luhn(digits) << endl;
    return 0;
}