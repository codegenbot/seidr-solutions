```cpp
#include <vector>
#include <iostream>

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
    std::vector<int> card = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int result = luhn(card);
    std::cout << "The Luhn check result is: " << result << std::endl;
    return 0;
}