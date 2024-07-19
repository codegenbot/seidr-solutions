#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using std::vector;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> rolling_max(const vector<int>& v) {
    vector<int> result(v.size());
    std::partial_sum(v.begin(), v.end(), result.begin(), [](int a, int b) { return std::max(a, b); });
    return result;
}