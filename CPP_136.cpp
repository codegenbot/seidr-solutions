#include <vector>
#include <algorithm>
#include <cassert>

int largest_smallest_integers(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec.front() + vec.back();
}

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}