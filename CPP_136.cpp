#include <algorithm>
#include <cassert>
#include <vector>

int largest_smallest_integers(std::vector<int> v) {
    return *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}