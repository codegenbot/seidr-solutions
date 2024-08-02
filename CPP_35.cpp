#include <algorithm>
#include <cmath>

int maxVal(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}