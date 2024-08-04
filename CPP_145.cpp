#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::sort(sorted_a.begin(), sorted_a.end());
    
    std::vector<int> sorted_b = b;
    std::sort(sorted_b.begin(), sorted_b.end());
    
    return std::accumulate(sorted_a.begin(), sorted_a.end(), 0) == std::accumulate(sorted_b.begin(), sorted_b.end(), 0);
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}