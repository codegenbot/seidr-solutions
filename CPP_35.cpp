#include <algorithm>
#include <cmath>

int maxAbsoluteValue(vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}