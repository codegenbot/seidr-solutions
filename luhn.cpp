#include <iostream>
#include <vector>

int luhn(int* digits, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if ((i % 2) == 1) {
            int doubleValue = (digits[i] * 2) % 10 == 0 ? (digits[i] * 2) / 10 : digits[i] * 2;
            sum += doubleValue > 9 ? doubleValue - 9 : doubleValue;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    for(int i : {4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5}) {
        digits.push_back(i);
    }
    std::cout << luhn(&digits[0], digits.size()) << std::endl;
    return 0;
}