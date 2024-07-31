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
    assert(is_sorted({-10, 0, 5, 8}));
    assert(is_sorted({1, 1, 2, 3, 3, 4}));
    assert(!is_sorted({5, 2, 1, 4}));
    assert(!is_sorted({1, 2, 2, 4}));
    assert(is_sorted({}));
    assert(is_sorted({100}));
    std::cout << "All test cases passed successfully." << std::endl;
    return 0;
}