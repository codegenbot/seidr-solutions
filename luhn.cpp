#include <iostream>
#include <vector>

int main() {
    int n = 16;
    std::vector<int> digits(n);

    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        int doubled = digits[i] * 2;
        sum += (doubled > 9) ? (doubled - 9) : doubled;
    }

    std::cout << sum << std::endl;

    return 0;
}