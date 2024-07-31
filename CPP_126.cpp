#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}));
    assert(is_sorted({-5, -2, 0, 3, 3, 7}));
    assert(!is_sorted({4, 2, 1, 3}));
    assert(is_sorted({-10, -7, 0, 3}));
    
    return 0;
}