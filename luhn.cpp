#include <vector>
#include <cmath>

int luhn(std::vector<int> card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i] * (doubleNext ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() { return luhn({4,5,3,9,2,6,5,3,8,7,1,6,0,2,0,0}); }