#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = 14; i >= 0; i -= 2) {
        if (digits[i] * 2 > 9) {
            sum += digits[i] * 2 - 9;
        } else {
            sum += digits[i] * 2;
        }
        sum += digits[i + 1];
    }

    cout << sum << endl;

    return 0;
}