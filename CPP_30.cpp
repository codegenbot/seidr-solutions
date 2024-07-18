#include <vector>
#include <cassert>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}