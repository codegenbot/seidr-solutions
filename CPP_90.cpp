#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.empty()) return -1;
    std::sort(lst.begin(), lst.end());
    for (auto it = prev(lst.end(), 1); it != lst.begin(); --it)
        if (*it > *prev(it))
            return *it;
    return -1;
}