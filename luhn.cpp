```cpp
#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += i;
            doubleNext = true;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int& digit : digits) {
        cin >> digit;
    }
    cout << luhn(digits) << endl;
    return 0;
}