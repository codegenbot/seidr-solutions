#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive;
    for (float num : input) {
        if (num > 0) {
            positive.push_back(num);
        }
    }
    return positive;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}