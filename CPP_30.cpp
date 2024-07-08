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
    std::vector<std::vector<float>> vectors;
    for(int i=0; i<3; i++){
        int n;
        float x;
        std::cout << "Enter the number of elements: ";
        std::cin >> n;
        std::cout << "Enter the values (negative numbers will be ignored): ";
        std::vector<float> v;
        for(int j=0; j<n; j++){
            std::cin >> x;
            if(x > 0.0f) {
                v.push_back(x);
            }
        }
        vectors.push_back(v);
    }

    std::vector<std::vector<float>> filtered_vectors = filter_vectors(vectors);

    for (const auto& v : filtered_vectors) {
        std::cout << "Filtered Vector: ";
        for (float x : v) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }

    return 0;
}