#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result(xs.size() - 1);
    for (size_t i = 1; i < xs.size(); i++) {
        result[i - 1] = xs[i] * i;
    }
    return result;
}