#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> digits(a);
    for (int i = 0; i < a; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = a - 1; i >= 0; --i) {
        if ((a - i) % 2 == 0) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;

    return 0;
}