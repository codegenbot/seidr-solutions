```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> digits = {4, 7, 8, 2, 9, 3, 5, 1, 6, 0, 4, 7, 5, 9, 9, 1};
    cout << luhnCheck(digits) << endl; 
    return 0;
}

int luhnCheck(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}