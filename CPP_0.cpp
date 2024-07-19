```
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
    std::vector<float> a = {0.5, 0.6, 1.1, 2.3};
    bool result = has_close_elements(a, 0.1);
    if (result) {
        std::cout << "The numbers have close elements." << std::endl;
    } else {
        std::cout << "The numbers do not have close elements." << std::endl;
    }
    return 0;
}