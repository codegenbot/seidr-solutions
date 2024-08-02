#include <vector>
#include <algorithm>

int min_element(std::vector<int> lst) {
    if(lst.size() == 0) return 0;
    std::vector<int>::iterator it = std::min_element(lst.begin(), lst.end());
    if (it != lst.end() && std::next(it) != lst.end()) {
        return *std::next(it);
    } else if (lst.size() < 2) {
        return *it;
    }
    return 0; // default value
}