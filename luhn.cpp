```cpp
#include <vector>
#include <cstdint>

int luhn(std::vector<int> cc) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cc.size() - 1; i >= 0; --i) {
        int digit = cc[i];
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
    std::vector<int> cc = {4, 3, 2, 1, 8, 0, 1, 6, 7, 2, 0, 0, 8, 5, 5, 9};
    int result = luhn(cc);
    return 0;
}