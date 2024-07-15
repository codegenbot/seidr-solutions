#include <vector>
#include <iostream>
#include <cassert>

namespace std {
    std::vector<int> get_odd_collatz(int n) {
        std::vector<int> result;

        while (n != 1) {
            result.push_back(n);
            n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        }

        result.push_back(1);
        return result;
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = std::get_odd_collatz(n);

    assert(issame(result, std::get_odd_collatz(n)));

    return 0;
}