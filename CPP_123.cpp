#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1); // 1 is always part of the sequence
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    std::cout << "Test passed!" << std::endl;

    return 0;
}