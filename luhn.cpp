#include <vector>
using namespace std;

int luhn(const vector<int>& cc) {
    int sum = 0;
    bool alternate = false;
    for (int i = cc.size() - 1; i >= 0; --i) {
        int digit = cc[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}