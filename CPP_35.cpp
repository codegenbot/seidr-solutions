#include <algorithm>
#include <cmath>

int maxAbsoluteValue(vector<int> l) {
    assert(!l.empty());
    return *std::max_element(l.begin(), l.end());
}