#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if (lst.empty()) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    int count = 0;
    for (auto i = sorted.begin(); i != sorted.end(); ++i) {
        if (*i > *(i+1)) {
            return *i;
        }
        ++count;
    }
    return -1; 
}