```cpp
#include <vector>

int luhn(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i + 1) % 2 != 0)
            sum += numbers[i];
        else {
            int digit = numbers[i] * 2;
            if (digit > 9)
                sum += digit - 9;
            else
                sum += digit;
        }
    }
    return sum;
}