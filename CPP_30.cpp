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

int main() {
    std::vector<float> values_a = {1.2, -3.5, 4.8, -2.0};
    std::vector<float> values_b = {2.3, -1.5, 0.0, 4.8};

    if (issame(values_a, values_b)) {
        std::cout << "Both vectors have the same positive values." << std::endl;
    } else {
        std::cout << "Positive values in the vectors differ." << std::endl;
    }

    return 0;
}