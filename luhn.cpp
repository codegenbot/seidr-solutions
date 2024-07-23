```cpp
#include <vector>
#include <iostream>

using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool isSecond = true;
    for (int i = 0; i < digits.size(); i++) {
        if (isSecond) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += digits[i];
        }
        isSecond = !isSecond;
    }
    return sum;
}

int main() {
    vector<int> digits = {3,4,5,1,3,8,6,7,8,9,0,0,4,5,5};
    cout << luhn(digits) << endl;
    return 0;
}