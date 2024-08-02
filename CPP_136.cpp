#include <vector>
#include <algorithm>
#include <cassert>

int largest_smallest_integers(const std::vector<int>& vec) {
    std::vector<int> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    return sorted_vec.front() + sorted_vec.back();
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}