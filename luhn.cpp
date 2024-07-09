#include <iostream>
#include <vector>

using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    
    for (int i = 0; i < digits.size() - 1; i++) {
        if ((digits.size() - 1 - i) % 2 == 0) { 
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
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