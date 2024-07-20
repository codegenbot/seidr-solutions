#include <algorithm>
#include <cmath>

int maxAbsoluteSum(vector<int>& l) {
    int currentMax = *max_element(l.begin(), l.end());
    int currentMin = *min_element(l.begin(), l.end());

    return (currentMax > currentMin) ? currentMax : -currentMin;
}