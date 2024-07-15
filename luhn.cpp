#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += digits[i];
        }
    }

    std::cout << sum << std::endl;

    return 0;
}