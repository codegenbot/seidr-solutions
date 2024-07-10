#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), std::vector<float>{}));
    assert(issame(get_positive({1, 2, 3}), std::vector<float>{1, 2, 3}));

    return 0;
}