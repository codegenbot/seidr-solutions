```cpp
#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::pair<float, float> p1, std::pair<float, float> p2) {
    for (int i = 0; i < 2; ++i) {
        if (p1.first != p2.first || p1.second != p2.second)
            return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if (diff < min_diff && !issame(std::make_pair(numbers[i], numbers[j]), closest_pair)) {
                min_diff = diff;
                closest_pair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return {closest_pair};
}

int main() {
    std::vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    std::vector<std::pair<float, float>> result = find_closest_elements(numbers);
    for (const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}