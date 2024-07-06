```cpp
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::fabs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;

}

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if (has_close_elements(a, 0.5)) {
        std::cout << "The vector has close elements." << std::endl;
    } else {
        std::cout << "The vector does not have close elements." << std::endl;
    }
    return 0;
}