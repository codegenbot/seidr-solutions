```c++
#include <iostream>
#include <vector>

using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if ((i % 2) == 1) { 
            digit *= 2;
            if (digit > 9) {
                sum += digit - 9;
            } else {
                sum += digit;
            }
        } else {
            sum += digit;
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}