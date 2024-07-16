#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);

    return 0;
}