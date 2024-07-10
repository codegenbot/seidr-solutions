```cpp
#include <vector>

int luhn(std::vector<int> card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];

        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;

        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> card = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 7, 2, 1, 1};
    int result = luhn(card);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}