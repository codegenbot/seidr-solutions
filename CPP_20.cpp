```cpp
#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    std::vector<float> numbers = {1.5, 3.9, 4.7, 6.8, 7.9};
    std::vector<float> result = find_closest_elements(numbers);
    
    // Print the result
    for (float num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) return numbers;

    float min_diff = std::numeric_limits<float>::max();
    float closest1 = 0;
    float closest2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }

    std::vector<float> result({closest1, closest2});
    return result;
}