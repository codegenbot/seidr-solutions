#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    assert(issame(arr, {2, 4, 8, 16, 32}));
    
    return 0;
}