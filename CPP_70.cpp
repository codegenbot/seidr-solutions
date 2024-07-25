#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool strange_sort_list(const std::vector<int>& list) {
    std::vector<int> sorted_list = list;
    std::sort(sorted_list.begin(), sorted_list.end());
    return issame(list, sorted_list);
}

int main() {
    assert(issame(std::vector<int>{111111}, std::vector<int>{111111}));
    assert(strange_sort_list({111111}));
    return 0;
}