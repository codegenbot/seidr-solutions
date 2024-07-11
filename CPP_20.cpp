#include <algorithm>
#include <vector>

bool issame(float a, float b) {
    if (a == b)
        return true;
    return false;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
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
    std::vector<float> numbers = {1.5, 2.3, 3.4, 6.7};
    std::cout << "Closest pair: ";
    for (float num : find_closest_elements(numbers)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}