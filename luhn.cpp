#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits(16);
    int n = 16;
    int sum = 0;

    for (int i = n - 1; i >= 0; i -= 2) {
        int doubled = digits[i] * 2;
        sum += (doubled > 9) ? (doubled - 9) : doubled;
    }

    for (int i = n - 2; i >= 0; i -= 2) {
        sum += digits[i];
    }

    std::cout << "Result: " << sum << std::endl;

    return 0;
}