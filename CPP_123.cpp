#include <iostream>
#include <vector>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    auto collatzSequence = get_odd_collatz(num);
    for (auto val : collatzSequence) {
        std::cout << val << " ";
    }
    return 0;
}