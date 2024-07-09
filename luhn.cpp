#include <iostream>
#include <vector>

using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 0; i < digits.size(); i++) {
        if (doubleNext) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += digits[i];
            doubleNext = !doubleNext;
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