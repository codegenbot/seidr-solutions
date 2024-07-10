#include <algorithm>
#include <cmath>

long long maximumElement(vector<int> l) {
    return *max_element(l.begin(), l.end());
}