#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> factorize(int num) {
    std::vector<int> result;
    for (int i = 2; num > 1; ++i) {
        while (num % i == 0) {
            result.push_back(i);
            num /= i;
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}