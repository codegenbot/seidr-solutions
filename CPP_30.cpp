#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    // Your implementation here
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive_values;
    for (float value : l) {
        if (value > 0) {
            positive_values.push_back(value);
        }
    }
    return positive_values;
}