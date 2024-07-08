```cpp
#include <iostream>
#include <vector>
#include <limits>

std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>>& vec) {
    std::vector<std::vector<float>> result;

    for (const auto& v : vec) {
        if (v.size() > 1) {
            bool first = true;
            float sum = 0.0f;
            for (float f : v) {
                if (first) {
                    first = false;
                    sum += f;
                } else {
                    if (abs(f - sum / (v.size() - 1)) < 0.0001) {
                        result.push_back(v);
                        return result;
                    }
                }
            }
        }
    }

    return vec;
}

int main() {
    std::vector<std::vector<float>> vectors;

    for (int i = 0; i < 5; ++i) {
        std::vector<float> v;
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        while(num != -1.0f) {
            v.push_back(num);
            std::cout << "Enter next element (or -1 to finish): ";
            std::cin >> num;
        }
        vectors.push_back(v);
    }

    std::vector<std::vector<float>> result = filter_vectors(vectors);

    for (const auto& v : result) {
        for (float f : v) {
            std::cout << f << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}