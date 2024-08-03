#include <algorithm>
#include <vector>

int findMaxValue(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}