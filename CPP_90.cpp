#include <algorithm>
#include <vector>

int findSecondMinElement(std::vector<int> lst) {
    std::vector<int>::iterator it = std::min_element(lst.begin(), lst.end());
    if (std::next(it) != lst.end()) {
        return *std::next(it);
    } else if (lst.size() < 2) {
        return 0;
    }
    return 0;
}