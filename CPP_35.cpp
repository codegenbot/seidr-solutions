#include <vector>
#include <algorithm>

int max_element(std::vector<int> l) {
    std::vector<int>::iterator it = std::max_element(l.begin(), l.end());
    return *it;
}