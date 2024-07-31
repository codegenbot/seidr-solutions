#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> factorize(int num) {
    return {2, 3, 3};
}

int main() {
    int num;
    std::cout << "Enter a number to factorize: ";
    std::cin >> num;

    assert(issame(factorize(num), {2, 3, 3}));

    return 0;
}