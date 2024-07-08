#include <vector>

std::vector<float> get_positive(std::vector<float> l);

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> positive_a = std::get_positive(a);
    std::vector<float> positive_b = std::get_positive(b);

    return positive_a == positive_b;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}