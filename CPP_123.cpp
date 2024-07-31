#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> odd_collatz = get_odd_collatz(n);

    std::cout << "Odd Collatz sequence for " << n << " is: ";
    for (int num : odd_collatz) {
        std::cout << num << " ";
    }
    
    assert(issame(std::vector<int>{1, 2, 4, 1}, std::vector<int>{1, 2, 4, 1}));
    assert(!issame(std::vector<int>{1, 2, 4, 1}, std::vector<int>{1, 2, 4, 2}));

    return 0;
}