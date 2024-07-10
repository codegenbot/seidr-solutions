#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}