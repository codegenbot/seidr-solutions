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

std::vector<float> get_positive(const std::vector<float>& vec, int& size) {
    size = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0.0f) {
            size++;
        }
    }

    std::vector<float> positiveVec;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0.0f) {
            positiveVec.push_back(vec[i]);
        }
    }

    return positiveVec;
}

int main() {
    int n;
    std::cout << "Enter number of vectors: ";
    std::cin >> n;

    std::vector<std::vector<float>> vectorPtr = std::vector<std::vector<float>>(n);

    for (auto& v : vectorPtr) {
        int m;
        std::cout << "Enter size of the vector: ";
        std::cin >> m;

        v.resize(m);
        std::cout << "Enter elements of the vector: ";
        for (float& f : v) {
            std::cin >> f;
        }
    }

    std::vector<std::vector<float>> result = filter_vectors(vectorPtr);

    if (!result.empty()) {
        std::cout << "Resultant Vectors: " << std::endl;
        for (const auto& v : result) {
            for (float f : v) {
                std::cout << f << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "No resultant vectors." << std::endl;
    }

    for (auto& v : vectorPtr) {
        // No need to delete[] &v[0]; since we're returning by value
    }

    return 0;
}