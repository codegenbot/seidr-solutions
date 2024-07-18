#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    if (lst.size() < 2) {
        return -1;
    }
    return lst[1];
}