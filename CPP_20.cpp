#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

bool issame(const std::vector<float>& vec) {
    if (vec.size() <= 1)
        return true;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (std::abs(vec[i] - vec[j]) < 1e-9)
                return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

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
    // Example usage:
    std::vector<float> numbers = {1.2, 3.4, 5.6, 7.8};
    if (!issame(numbers)) {
        std::cout << "The input array contains duplicate elements.\n";
    } else {
        std::vector<float> closest_pair = find_closest_elements(numbers);
        std::cout << "The closest pair of numbers is: ";
        for (float num : closest_pair) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}