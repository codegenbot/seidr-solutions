```cpp
#include <iostream>
#include <vector>

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
    std::vector<std::vector<float>> vectors = {{-1.0, 2.0}, {-3.0, 4.0}, {5.0, -6.0}, {7.0, 8.0}};
    std::vector<std::vector<float>> result = filter_vectors(vectors);

    for (const auto& v : result) {
        for (float f : v) {
            std::cout << f << " ";
        }
        std::cout << "\n";
    }

    return 0;
}