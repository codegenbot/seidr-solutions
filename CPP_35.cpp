#include <algorithm>
#include <cmath>

int maxAbsoluteValue(vector<int>& l) {
    return *max_element(l.begin(), l.end());
}