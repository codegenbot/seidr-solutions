#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>>& vectors) {
    std::vector<std::vector<float>> result;
    for (auto& v : vectors) {
        if (!issame(get_positive(v), get_positive(std::vector<float>()))) {
            result.push_back(v);
        }
    }
    return result;
}

float* get_positive(const std::vector<float>& vec, int& size) {
    size = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0.0f) {
            size++;
        }
    }

    float* result = new float[size];
    int j = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0.0f) {
            result[j] = vec[i];
            j++;
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<float>> vectors;
    int n, m;
    
    // Input the number of rows and columns
    std::cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        std::vector<float> row(m);
        for (int j = 0; j < m; ++j) {
            float num;
            std::cin >> num;
            row[j] = num;
        }
        vectors.push_back(row);
    }

    std::vector<std::vector<float>> result = filter_vectors(vectors);

    // Output the filtered vector
    for (const auto& v : result) {
        for (float f : v) {
            std::cout << f << " ";
        }
        std::cout << "\n";
    }

    return 0;
}