#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> positive_elements;
    for (const auto& num : v) {
        if (num > 0) {
            positive_elements.push_back(num);
        }
    }
    return positive_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}