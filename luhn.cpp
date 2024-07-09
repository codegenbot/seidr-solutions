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

int main() { return luhn({4,3,2,1,6,7,8,9,4,5,3,9,8,7,6,1}); }