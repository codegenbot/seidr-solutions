#include <iostream>
#include <vector>

bool issame(std::vector<std::float> a, std::vector<std::float> b) {
    return a == b;
}

std::vector<std::float> derivative(std::vector<std::float> xs) {
    std::vector<std::float> result;
    for (std::size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}