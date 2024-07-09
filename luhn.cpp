#include <vector>

int luhn(const std::vector<int>& card) {
    int sum = 0;
    bool isSecond = true;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (!isSecond) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isSecond = !isSecond;
    }

    return sum;
}

int main() { return luhn({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}); }