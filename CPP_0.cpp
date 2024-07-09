```cpp
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
    std::vector<float> row1 = {1.0f};
    std::vector<float> row2 = {2.0f, 3.9f, 4.0f, 5.0f};
    std::vector<float> row3 = {2.2f};
    std::vector<float> row4 = {0.0f};

    std::vector<std::vector<float>> numbers = {row1, row2, row3, row4};

    assert(has_close_elements(numbers, 0.5) == false);

    std::vector<float> row5 = {1.1f};
    std::vector<float> row6 = {2.2f, 3.1f, 4.1f, 5.1f};

    std::vector<std::vector<float>> numbers2 = {row5, row6};
    
    assert(has_close_elements(numbers2, 0.5) == false);
}