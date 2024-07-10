#include <vector>

int main() {
    std::vector<int> card;
    int sum = 0;
    bool doubleNext = false;

    for (int i = 16 - 1; i >= 0; --i) {
        if(i % 2 == 1) {
            card.push_back((i < 10) ? (doubleNext ? card[i] * 2 : card[i]) : ((doubleNext ? card[i] * 2) / 10) + ((doubleNext ? card[i] * 2) % 10));
        } else {
            card.push_back(i);
        }
        doubleNext = !doubleNext;
    }

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;
}