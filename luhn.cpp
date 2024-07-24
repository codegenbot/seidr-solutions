#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}

int main() {
    vector<int> digits; 
    for (int i = 0; i < 16; ++i) {
        int num;
        cin >> num;
        digits.push_back(num);
   
    
    cout << luhn(digits); 
    return 0;
}