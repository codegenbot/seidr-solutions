#include <algorithm>
#include <cmath>

int maxAbsoluteValue(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}