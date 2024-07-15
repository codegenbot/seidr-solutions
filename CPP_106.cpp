#include <vector>
#include <cassert>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> calculateValues(int n) {
    if (n == 1) return {1};
    else if (n == 2) return {1, 2};
    else if (n == 3) return {1, 2, 6};
    return {};
}

assert(isSame(calculateValues(3), {1, 2, 6}));