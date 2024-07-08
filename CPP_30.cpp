#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>> vectors) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vectors) {
        if (!issame(get_positive(v), std::vector<float>())) {
            result.push_back(v);
        }
    }
    return result;
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0.0) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> vectors(n);
    for (int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;

        vectors[i].resize(m);

        for (int j = 0; j < m; ++j) {
            float val;
            std::cin >> val;
            vectors[i][j] = val;
        }
    }

    std::vector<std::vector<float>> filtered_vectors = filter_vectors(vectors);
    if (filtered_vectors.empty()) {
        std::cout << "0\n";
    } else {
        for (const auto& v : filtered_vectors) {
            std::cout << v.size() << "\n";
        }
    }

    return 0;
}