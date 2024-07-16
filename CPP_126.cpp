#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(std::vector<int> lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] != sorted_lst[i] || (i > 0 && lst[i] == lst[i - 1])) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}