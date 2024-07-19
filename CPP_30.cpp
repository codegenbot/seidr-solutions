```cpp
#include <vector>

std::vector<float> extract_positives(std::vector<float> numbers) {
    std::vector<float> positive_numbers;
    for (float number : numbers) {
        if (number > 0) {
            positive_numbers.push_back(number);
        }
    }
    return positive_numbers;
}

int main() {
    std::vector<float> numbers = {-1.0, 0.0, 1.0};
    auto result = extract_positives(numbers);
    for (float number : result) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}