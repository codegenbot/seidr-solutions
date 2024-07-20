#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < card.size(); i++) {
        if (doubleNext) {
            int digit = card[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += card[i];
            doubleNext = true;
        }
    }
    return sum;
}