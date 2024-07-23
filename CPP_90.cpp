#include <vector>
#include <algorithm>

auto next_smallest(std::vector<int> lst) -> int {
    if (lst.size() < 2)
        return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0])
            return sorted[i];
    }
    return -1; 
}