#include <algorithm>
#include <vector>

bool issame(float a, float b) {
    return (a - b) < 0.00001;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}

int main() {
    // Verify the output
    std::vector<float> numbers = {1.3, 2.3, 5.4, 7.6};
    std::vector<float> result = find_closest_elements(numbers);
    for (float num : result) {
        std::cout << num << " ";
    }
    return 0;
}