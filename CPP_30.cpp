#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& values) {
    std::vector<float> result;
    for (float value : values) {
        if (value > 0) {
            result.push_back(value);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    std::vector<float> positive_a = get_positive(a);
    std::vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
}

int main() {
    std::vector<float> a = {-1.5f, 2.0f, 3.5f};
    std::vector<float> b = {4.0f, -2.5f, 1.0f};

    if (issame(a, b)) {
        std::cout << "Both vectors have the same positive values." << std::endl;
    } else {
        std::cout << "Positive values in vectors are different." << std::endl;
    }

    return 0;
}