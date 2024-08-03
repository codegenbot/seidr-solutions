#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> digits(16);

    for (int i = 0; i < 16; i++) {
        cin >> digits[i];
    }

    int sum = 0;

    for (int i = 1; i < 16; i += 2) {
        digits[i] *= 2;
        sum += (digits[i] > 9) ? (digits[i] - 9) : digits[i];
    }

    for (int i = 0; i < 16; i += 2) {
        sum += digits[i];
    }

    cout << sum << endl;

    return 0;
}