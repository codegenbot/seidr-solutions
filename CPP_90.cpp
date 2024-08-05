#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2)
        return None;
    std::sort(lst.begin(), lst.end());
    if (lst[0] == lst[1])
        return None;
    return lst[1];
}