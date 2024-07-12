#include <algorithm>
#include <cmath>

long long maxAbsolute(vector<int> v) {
    return *max_element(v.begin(), v.end()) > 0 ? *max_element(v.begin(), v.end()) : -(*max_element(v.begin(), v.end()));
}