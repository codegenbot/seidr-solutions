```
#include <vector>

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

int main() { return luhn({4,7,8,0,0,5,3,9,6,7,1,1,7,2,8,3}); }