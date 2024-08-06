#include <utility>
#include <vector>
#include <algorithm>

bool find_closest_elements(const std::vector<float>& v) {
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> result;
    for (size_t i = 0; i < v.size() - 1; ++i) {
        float diff = std::abs(v[i] - v[i+1]);
        if (diff < min_diff) {
            min_diff = diff;
            result = {v[i], v[i+1]};
        }
    }
    return result;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == {2.2, 3.1});
    return 0;
}