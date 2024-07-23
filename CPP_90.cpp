#include <vector>
#include <algorithm>

std::vector<int> next_smallest(std::vector<int> lst) {
    if (lst.size() < 2)
        return lst; 
    std::vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0])
            return sorted;
    }
    return lst; 
}