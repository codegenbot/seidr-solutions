```cpp
#include <algorithm>
#include <cassert>
#include <vector>

int findMax(std::vector<int> l) {
    int max = *std::max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    std::vector<int> v = {1, 2, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert(abs(findMax(v) - 12)<1e-4);
}