#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int doubled = digits[i] * 2;
            if(doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 1, 7, 3, 9, 5};
    cout << luhn(digits);
    return 0;
}