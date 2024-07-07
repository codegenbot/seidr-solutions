#include <vector>
#include <algorithm>

float findMax(const vector<float>& l) {
    auto it = max_element(l.begin(), l.end());
    return *it;
}