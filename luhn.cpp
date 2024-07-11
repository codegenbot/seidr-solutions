#include <vector>
using namespace std;

int luhnAlgorithm(vector<int>& ccNum) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = 15; i >= 0; --i) {
        int digit = ccNum[i];
        if (!doubleDigit) {
            sum += digit;
        } else {
            int doubled = digit * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        }
        doubleDigit = !doubleDigit;
    }
    return sum;
}