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
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({2, 4, 7, 9}) == true);
    assert(is_sorted({1, 3, 2, 4}) == false);
    assert(is_sorted({1, 2, 2, 4}) == false);
    assert(is_sorted({4, 3, 2, 1}) == false);
    
    return 0;
}