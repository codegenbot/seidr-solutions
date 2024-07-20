#include <algorithm>
#include <cmath>

int maxAbsSum(vector<int>& l) {
    return *max_element(l.begin(), l.end());
}