#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
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

    assert(issame(odd_collatz, get_odd_collatz(n)));

    return 0;
}