#include <vector>

int luhn(std::vector<int> card) {
    int sum = 0;
    bool alternate = false;

    for (int i = card.size() - 1; i >= 0; i--) {
        if (alternate) {
            int digit = card[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += card[i];
        }
        alternate = !alternate;
    }

    return sum;
}