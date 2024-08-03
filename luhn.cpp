#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 16;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    int sum = digits[15]; // Rightmost digit does not need to be doubled

    for (int i = 0; i < n - 1; i++) { // Start from the rightmost digit without doubling
        if (i % 2 == 0) { // Double every other digit starting from the rightmost digit
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;

    return 0;
}