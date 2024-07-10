```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float const& a, float const& b) {
    return std::abs(a - b) < 0.001;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (issame(numbers[i], numbers[i + 1])) {
            closest_pairs.push_back({numbers[i], numbers[i + 1]});
        }
    }
    return closest_pairs;
}

int main() {
    std::vector<float> numbers;
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    if (!numbers.empty()) {
        for (size_t i = 0; i < numbers.size() - 1; ++i) {
            bool is_match = false;
            for (size_t j = i + 1; j < numbers.size(); ++j) {
                if (issame(numbers[i], numbers[j])) {
                    is_match = true;
                    break;
                }
            }
            if (!is_match) {
                closest_pairs.push_back({numbers[i], numbers[i]});
            } else {
                for (size_t k = i; k < j; ++k) {
                    closest_pairs.push_back({numbers[k], numbers[k]});
                }
                i = j - 1;
            }
        }
    }
    
    if (!closest_pairs.empty()) {
        for (const auto& pair : closest_pairs) {
            std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}