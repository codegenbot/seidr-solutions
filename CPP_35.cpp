#include <algorithm>
#include <vector>
#include <cassert>

int main() {
    std::vector<int> vec = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxVal = *std::max_element(vec.begin(), vec.end());
    assert(std::abs(maxVal-12)<1e-4);
    return 0;