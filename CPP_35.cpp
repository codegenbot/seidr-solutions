#include <algorithm>
#include <cmath>

long long maxAbsSum(vector<int>& l) {
    return *max_element(l.begin(), l.end());
}