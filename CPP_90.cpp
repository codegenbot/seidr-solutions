#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1;

    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());

    int first_smallest = sorted_lst[0];
    for (size_t i = 1; i < sorted_lst.size(); ++i) {
        if (sorted_lst[i] != first_smallest) {
            return sorted_lst[i];
        }
    }

    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    assert(next_smallest({1, 1, 1}) == -1);
    assert(next_smallest({}) == -1);
    assert(next_smallest({3, 4, 1, 2}) == 2);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}