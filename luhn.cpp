```cpp
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

int main() { return luhn({4,7,8,7,1,1,6,5,3,9,2,8,0,8,0,6}); }