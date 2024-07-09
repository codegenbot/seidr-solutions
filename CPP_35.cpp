#include <algorithm>
#include <cassert>
#include <vector>
#include <initializer_list>

int findMax(std::vector<int> l) {
    size_t n = l.size();
    int max = *std::max_element(l.begin(), l.end());
    return std::abs(max - 12);
}

int main() {
    assert(std::abs(*std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end())- 12)<1e-4;
    std::vector<int> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return 0;
}