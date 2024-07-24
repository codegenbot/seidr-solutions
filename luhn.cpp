#include <vector>
using namespace std;

int luhnCheck(vector<int> ccNum) {
    int sum = 0;
    bool isDouble = false;
    for (int i = ccNum.size() - 1; i >= 0; --i) {
        if (isDouble) {
            int digit = ccNum[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += ccNum[i];
        }
        isDouble = !isDouble;
    }
    return sum;
}