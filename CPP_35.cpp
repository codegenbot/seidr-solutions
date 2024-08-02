#include <algorithm>
#include <cmath>

int maxAbsSum(vector<int> &l) {
    return *std::max_element(l.begin(), l.end());
}