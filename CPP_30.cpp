
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> positive_vec;
    for (float num : vec) {
        if (num > 0) {
            positive_vec.push_back(num);
        }
    }
    return positive_vec;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}