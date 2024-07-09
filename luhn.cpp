#include <vector>
#include <iostream>

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

int main() {
    std::vector<int> card = {4,3,2,1,8,7,6,5,4,3,2,1};
    int result = luhn(card);
    std::cout << "The Luhn checksum is: " << result << std::endl;
    return 0;
}