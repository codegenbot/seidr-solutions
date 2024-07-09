```cpp
#include <iostream>
#include <vector>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::find(a.begin(), a.end(), i+1) == a.end() || std::find(b.begin(), b.end(), i+1) == b.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n > 0) {
        std::vector<int> result = get_odd_collatz(n);
        if (same(get_odd_collatz(n), {1})) {
            std::cout << "Odd Collatz Conjecture sequence for " << n << ": ";
            for (int i : result) {
                std::cout << i << " ";
            }
            std::cout << "\n";
        } else {
            std::cout << "The number is not part of the odd Collatz conjecture.\n";
        }
    } else {
        std::cout << "Please enter a positive integer.\n";
    }
    return 0;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        result.push_back(n);
    }
    return result;
}