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
    // Example usage
    std::vector<float> a = {-1.5, 2.0, 3.5};
    std::vector<float> b = {4.0, -2.5, 1.0};

    if (issame(a, b)) {
        std::cout << "Both vectors have the same positive values." << std::endl;
    } else {
        std::cout << "Positive values in vectors are different." << std::endl;
    }

    return 0;
}