#include <initializer_list>
#include <vector>
#include <cmath>

bool isSame(const std::pair<float, float>& pair1, const std::pair<float, float>& pair2) {
    return std::abs(pair1.first - pair1.second) == std::abs(pair2.first - pair2.second);
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
    try {
        std::vector<float> numbers = {1.0f, 2.0f, 3.0f};
        auto result = find_closest_elements(numbers);
        if (isSame(result, std::make_pair(2.5f, 2.5f))) {
            std::cout << "Closest elements are same." << std::endl;
        } else {
            std::cout << "Closest elements are not the same." << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // return non-zero status
    }

    return 0;
}