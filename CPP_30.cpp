#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> values) {
    std::vector<float> result;
    for (float value : values) {
        if (value > 0) {
            result.push_back(value);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}