#include <algorithm>
#include <cmath>

int largestAbsolute(int n) {
    assert(n > 0);
    return *std::max_element(std::vector<int>(n, 1), std::vector<int>(n, -1));
}