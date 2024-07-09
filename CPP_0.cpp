```cpp
#include <iostream>
#include <vector>

bool has_close_elements(std::vector<std::pair<std::vector<float>, std::vector<float>>> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            size_t k = 0;
            while (k < numbers[i].first.size() && k < numbers[j].second.size()) {
                float diff = std::abs(numbers[i].first[k] - numbers[j].second[k]);
                if (diff <= tol) {
                    closeFound = true;
                    break;
                }
                k++;
            }
            if (closeFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<std::pair<std::vector<float>, std::vector<float>>> input = {{std::vector<float>{{1.0f}, {2.0f}}, std::vector<float>{{1.0f}, {2.0f}}}, {std::vector<float>{{3.9f}, {4.0f}}, std::vector<float>{{4.0f}, {5.0f}}}, {std::vector<float>{{5.0f}, {2.2f}}, std::vector<float>{{0.0f}, {0.0f}}}};
    assert(has_close_elements(input, 0.5) == false);
    return 0;
}