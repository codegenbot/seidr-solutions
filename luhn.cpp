#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        if ((n - i - 1) % 2 == 1) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        } else {
            sum += digits[i];
        }
    }
    
    sum %= 10;

    if (sum % 10 == 0) {
        cout << "Valid credit card number" << endl;
    } else {
        cout << "Invalid credit card number" << endl;
    }
    
    return 0;
}