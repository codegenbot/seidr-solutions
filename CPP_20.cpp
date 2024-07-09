#include <vector>
#include <algorithm>
#include <iostream>

bool issame(float a, float b) {
    if (a == b)
        return true;
    else
        return false;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < std::abs(closest_pair.first - closest_pair.second)) {
                closest_pair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pair;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    try {
        auto closestPair = find_closest_elements(numbers);
        std::cout << "The closest pair of elements is (" << closestPair.first << ", " << closestPair.second << ")" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}