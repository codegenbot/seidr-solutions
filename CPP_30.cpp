#include <vector>
#include <iostream>

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (const auto& num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}