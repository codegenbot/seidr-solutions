#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive_values;

    for (float val : input) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }

    return positive_values;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}    