#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> vec) {
    if (vec.empty()) {
        return vec;
    }

    std::vector<float> result;

    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> temp;
            int j = i;
            while (j < vec.size() && j % 2 == 0) {
                temp.push_back(vec[j]);
                j++;
            }
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
                if (k < i - j + 1) {
                    result.push_back(vec[j + k]);
                }
            }
        } else {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    std::vector<float> vec = {5.0, 3.0, 7.0, 2.0, 8.0, 6.0};
    std::vector<float> sorted_even = sort_even(vec);
    for (float f : sorted_even) {
        std::cout << f << " ";
    }
    return 0;
}