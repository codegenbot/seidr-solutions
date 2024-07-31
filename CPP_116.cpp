#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sortedArray = arr;
    std::sort(sortedArray.begin(), sortedArray.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
    
        if (count_a != count_b) {
            return count_a < count_b;
        } else {
            return a < b;
        }
    });

    return sortedArray;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    
    return 0;
}