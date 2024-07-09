```c++
#include <vector>
#include <initializer_list>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (!issame(std::vector<float>({numbers[i], numbers[j]}), std::vector<float>(numbers.begin() + i, numbers.begin() + j))) {
                if (std::abs(numbers[i] - numbers[j]) < std::abs(closest_pair.first - closest_pair.second)) {
                    closest_pair = std::make_pair(numbers[i], numbers[j]);
                }
            }
        }
    }

    return closest_pair;
}