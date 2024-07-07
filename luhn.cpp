#include <iostream>
#include <vector>
using namespace std;

int luhnCheck(vector<int> digits) {
    int sum = 0;
    for(int i = digits.size() - 1; i >= 0; i--) { 
        if(i % 2 == 1) {
            int doubleDigit = digits[i] * 2;
            if(doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int digit;
        cin >> digit;
        input.push_back(digit);
    }
    cout << luhnCheck(input) << endl;
    return 0;
}