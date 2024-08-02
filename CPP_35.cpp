#include <algorithm>
#include <cmath>

int maxAbsVal(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}