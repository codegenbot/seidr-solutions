#include <iostream>
#include <vector>

bool has_close_elements(std::vector<std::pair<float, float>> numbers, float threshold) {
    for (int i = 1; i < numbers.size(); i++) {
        if (std::abs(numbers[i].first - numbers[i-1].second) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<std::pair<float, float>> numbers = {{1.0f, 2.0f}, {3.9f, 4.0f}, {5.0f, 2.2f}};
    assert(has_close_elements({{1.1f, 2.2f}, {3.1f, 4.1f}, {5.1f, 5.1f}}, 0.5) == false);
}