#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float val : v) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}