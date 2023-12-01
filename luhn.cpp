#include <iostream>
#include <vector>

int luhnAlgorithm(std::vector<int>& digits) {
    int sum = 0;
    int size = digits.size();

    for (int i = size - 2; i >= 0; i -= 2) {
        int doubled = digits[i] * 2;
        if (doubled > 9) {
            doubled -= 9;
        }
        digits[i] = doubled;
    }

    for (int i = 0; i < size; i++) {
        sum += digits[i];
    }

    return sum;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }

    int result = luhnAlgorithm(digits);
    std::cout << result << std::endl;

    return 0;
}