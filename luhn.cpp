#include <iostream>
#include <vector>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (auto i : digits) {
        if (digits.size() - i % 2 == 1) {
            int doubleValue = i * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue;
        } else
            sum += i;
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    for(int i : {4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5}) {
        digits.push_back(i);
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}