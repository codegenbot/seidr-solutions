#include <algorithm>
#include <cmath>

int maxAbsSum(vector<int> l) {
    return *max_element(abs(l.begin()), abs(l.end()));
}