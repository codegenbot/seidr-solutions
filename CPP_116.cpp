#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    
    sort_array(sorted_a);
    sort_array(sorted_b);

    return sorted_a == sorted_b;
}

int main() {
    assert(issame({2, 4, 8, 16, 32}, {2, 4, 8, 16, 32}));

    return 0;
}