#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            // Create a temporary vector to store the even elements.
            std::vector<float> temp;
            float prev = vec[i];
            bool first = true;
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                if (!first || issame(vec[j], prev)) {
                    temp.push_back(prev);
                    prev = vec[j];
                    first = false;
                } else {
                    prev = vec[j];
                }
            }
            // Sort the temporary vector.
            std::sort(temp.begin(), temp.end());
            // Replace even elements in result with the sorted ones.
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                if (!first || issame(vec[j], prev)) {
                    result.push_back(prev);
                    prev = vec[j];
                    first = false;
                } else {
                    prev = vec[j];
                }
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    std::vector<float> vec = {1.5, 2.0, 2.0, 3.0, 3.5, 4.0};
    std::vector<float> res = sort_even(vec);
    for (float f : res) {
        std::cout << f << " ";
    }
    return 0;
}