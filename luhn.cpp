#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        int num = digits[i];
        if (i % 2 != 0) {
            int doubled = num * 2;
            if (doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += num;
        }
    }

    cout << sum << endl;

    return 0;
}