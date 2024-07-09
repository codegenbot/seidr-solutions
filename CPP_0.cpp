#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {2.0, 3.0, 4.0, 1.5};
    float threshold = 0.5;
    if (has_close_elements(numbers, threshold)) {
        std::cout << "There exist two elements in the vector that are within the given threshold." << std::endl;
    } else {
        std::cout << "No two elements in the vector are within the given threshold." << std::endl;
    }
    return 0;
}