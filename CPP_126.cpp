#include <iostream>
#include <vector>
#include <cassert> // Include <cassert> header for assert function

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] > lst[i + 1]) {
            return false;
        }
    }
    return true;
}