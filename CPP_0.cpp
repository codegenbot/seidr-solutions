```
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char** argv) {
    std::vector<float> a({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f});
    if (has_close_elements(a, 0.1)) {
        std::cout << "The array contains close elements." << std::endl;
    } else {
        std::cout << "The array does not contain close elements." << std::endl;
    }
}