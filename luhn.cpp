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
    std::vector<int> card = {3,4,5,1,7,1,8,0,2,6,8,0,8,9,1,6};
    int result = luhn(card);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}