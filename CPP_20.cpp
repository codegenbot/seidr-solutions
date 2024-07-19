#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), vector<pair<float, float>>{{{2.2f, 3.1f}}}));
}