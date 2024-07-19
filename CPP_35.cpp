#include <vector>
#include <algorithm>

int max_value(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}

int main() {
    std::vector<int> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert(std::abs(max_value(v) - 124) < 1e-4);
    return 0;
}