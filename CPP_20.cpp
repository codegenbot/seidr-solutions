#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float sum = 0;
    for (const auto& num : numbers) {
        sum += num;
    }
    float avg = sum / numbers.size();

    float min_diff = std::abs(avg - numbers[0]);
    std::vector<float> closest_elements;

    for (const auto& num : numbers) {
        if (std::abs(avg - num) < min_diff) {
            min_diff = std::abs(avg - num);
            closest_elements.clear();
            closest_elements.push_back(num);
        } else if (std::abs(avg - num) == min_diff) {
            closest_elements.push_back(num);
        }
    }

    return closest_elements;
}

int main() {
    std::vector<float> result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});

    for (const auto& elem : result) {
        std::cout << elem << " ";
    }

    return 0;
}