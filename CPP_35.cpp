#include <algorithm>
#include <cmath>

int maxAbsoluteDiff(vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}