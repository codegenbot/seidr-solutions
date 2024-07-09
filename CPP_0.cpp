#include <iostream>
#include <vector>
#include <initializer_list>

bool has_close_elements(std::vector<std::vector<float>> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            for (size_t k = 0; k < numbers[i].size(); k++) {
                if (k < numbers[j].size()) {
                    float diff = std::abs(numbers[i][k] - numbers[j][k]);
                    if (diff <= tol) {
                        closeFound = true;
                        break;
                    }
                } else {
                    closeFound = true;
                    break;
                }
            }
            if (closeFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<std::vector<float>> numbers;
    numbers.push_back({1.0f});
    numbers.push_back({1.0f});
    numbers.push_back({2.0f});
    numbers.push_back({2.0f});
    numbers.push_back({3.9f});
    numbers.push_back({3.9f});
    numbers.push_back({4.0f});
    numbers.push_back({4.0f});
    numbers.push_back({5.0f});
    numbers.push_back({5.0f});
    numbers.push_back({2.2f});
    numbers.push_back({2.2f});
    numbers.push_back({0.0f});
    numbers.push_back({0.0f});

    assert(has_close_elements(numbers, 0.5) == false);

    std::vector<std::vector<float>> numbers2;
    numbers2.push_back({1.1f});
    numbers2.push_back({1.1f});
    numbers2.push_back({2.2f});
    numbers2.push_back({2.2f});
    numbers2.push_back({3.1f});
    numbers2.push_back({3.1f});
    numbers2.push_back({4.1f});
    numbers2.push_back({4.1f});
    numbers2.push_back({5.1f});
    numbers2.push_back({5.1f});

    assert(has_close_elements(numbers2, 0.5) == false);