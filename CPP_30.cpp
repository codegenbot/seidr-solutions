#include <iostream>
#include <vector>
#include <algorithm>

bool checkSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>> vectors) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vectors) {
        int size = 0;
        std::vector<float> positiveVec = get_positive(v, size);
        if (!checkSame({}, std::vector<float>(size))) {
            result.push_back(positiveVec);
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

    std::vector<std::vector<float>> vectors(n);

    for (auto& v : vectors) {
        int m;
        std::cout << "Enter size of the vector: ";
        std::cin >> m;

        v.resize(m);
        std::cout << "Enter elements of the vector: ";
        for (float& f : v) {
            std::cin >> f;
        }
    }

    std::vector<std::vector<float>> result = filter_vectors(vectors);

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

    return 0;
}