#include <iostream>
#include <vector>

using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 1; i < digits.size(); i++) {
        if (i % 2 == 1) { 
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else { // add the result of doubling the first digit
            int doubled = digits[0] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
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