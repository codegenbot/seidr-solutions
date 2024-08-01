```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> digits = {4, 5, 2, 7, 1, 3, 9, 0, 8, 6, 9, 5, 5, 8, 4, 5}; 
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