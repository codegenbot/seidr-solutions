#include <vector>
#include <algorithm>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> result;
    for (float num : vec) {
        if (num >= 0.0f) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<float>> vectors = {{1, -2, 3}, {4, -5, 6}, {-7, 8, -9}};
    vector<vector<float>> result = filter_vectors(vectors);

    for (const auto& v : result) {
        for (float num : v) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

std::vector<vector<float>> filter_vectors(std::vector<std::vector<float>> vectors) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vectors) {
        if (!issame(get_positive(v), get_positive({}))) {
            result.push_back(v);
        }
    }
    return result;
}