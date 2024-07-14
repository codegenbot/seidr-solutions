#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    return sum;
}