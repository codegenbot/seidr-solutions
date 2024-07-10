#include <algorithm>
#include <cmath>

std::vector<int> maxAbsSum(vector<int>& l) {
    return *max_element(l.begin(), l.end());
}