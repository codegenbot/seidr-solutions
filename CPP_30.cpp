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
    int num_vectors;
    std::cout << "Enter the number of vectors: ";
    std::cin >> num_vectors;

    std::vector<std::vector<float>> vectors;
    for (int i = 0; i < num_vectors; i++) {
        int num_elements;
        std::cout << "Enter the number of elements in vector " << i + 1 << ": ";
        std::cin >> num_elements;

        std::vector<float> temp;
        for (int j = 0; j < num_elements; j++) {
            float element;
            std::cout << "Enter the " << j + 1 << "th element of vector " << i + 1 << ": ";
            std::cin >> element;
            temp.push_back(element);
        }

        vectors.push_back(temp);
    }

    std::vector<std::vector<float>> filtered_vectors = filter_vectors(vectors);

    if (filtered_vectors.empty()) {
        std::cout << "No vectors left after filtering.\n";
    } else {
        std::cout << "The following vectors are not the same when only their positive elements are considered:\n";
        for (const auto& v : filtered_vectors) {
            std::cout << "{ ";
            for (float element : get_positive(v)) {
                std::cout << element << " ";
            }
            std::cout << "}\n";
        }
    }

    return 0;
}