#include <algorithm>
#include <vector>

int findSecondMinElement(const std::vector<int>& lst) {
    if (lst.size() < 2) {
        return 0;
    }
    
    auto it = std::min_element(lst.begin(), lst.end());
    if (std::next(it) != lst.end()) {
        return *std::next(it);
    } else {
        return 0;
    }
}