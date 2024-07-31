#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }
    
    if ((array.front() + array.back()) % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

// Test case to verify sort_array function
int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}

