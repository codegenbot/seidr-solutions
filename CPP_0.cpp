#include <vector>
#include <cmath>  // For std::abs

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    bool result = has_close_elements(a, 0.1);
    if (result)
        std::cout << "The vector contains elements with a difference less than or equal to the threshold." << std::endl;
    else
        std::cout << "The vector does not contain elements with a difference less than or equal to the threshold." << std::endl;

    return 0;
}