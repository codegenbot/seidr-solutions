#include <vector>
#include <algorithm>
#include <cassert>

int largest_smallest_integers(const std::vector<int>& vec) {
    std::vector<int> temp = vec;
    std::sort(temp.begin(), temp.end());
    return temp.front() + temp.back();
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}

int main() {
    assert(issame(std::vector<int>{-6, -4, -4, -3, -100, 1}, std::vector<int>{-3, 1}));
    return 0;
}