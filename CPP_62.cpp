#include <vector>

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] - xs[i-1]);
    }
    return std::move(result);
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}