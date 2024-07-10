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
    for (int i = n - 2; i >= 0; i -= 2) {
        int doubled = digits[i] * 2;
        sum += (doubled > 9) ? (doubled - 9) : doubled;
    }

    for (int i = n - 1; i >= 0; i -= 2) {
        sum += digits[i];
    }

    cout << sum << endl;

    return 0;
}