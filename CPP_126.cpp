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
    assert(is_sorted({1, 1, 2, 3}) == false);
    assert(is_sorted({3, 2, 1}) == false);
    assert(is_sorted({5, 5, 6, 7}) == false);
    assert(is_sorted({1}) == true);
    return 0;
}