```cpp
#include <vector>
#include <algorithm>

std::vector<int> next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return std::vector<int>();
    std::sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > lst[0]) return std::vector<int>({lst[i]});
    }
    return std::vector<int>();
}