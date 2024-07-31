#include <algorithm>
#include <vector>

std::vector<int> maxElement(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}