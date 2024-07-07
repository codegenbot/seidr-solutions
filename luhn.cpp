#include <iostream>
#include <vector>
using namespace std;
int luhn(const vector<string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
        if (digit > 9 && digit < 20) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}
int main() {
    vector<string> digits = {"1", "2", "3", "4", "5"};
    int result = luhn(digits);
    cout << result << endl;
    return 0;
}