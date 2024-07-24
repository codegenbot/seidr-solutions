```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> &digits) {
    int sum = 0;
    bool alternate = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }

    return sum;
}

int main() {
    std::vector<int> digits;
    int num;
    for(int i=0; i<16; ++i){
        std::cin >> num;
        digits.push_back(num);
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}