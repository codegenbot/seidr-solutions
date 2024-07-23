#include <vector>
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