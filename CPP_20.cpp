#include <algorithm>
#include <vector>
#include <numeric>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({1.2f, 3.4f}, find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}));
    return 0;
}