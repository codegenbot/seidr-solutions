#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;

    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }

    result.push_back(1);
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = get_odd_collatz(n);

    assert(issame(result, {1}));

    return 0;
}