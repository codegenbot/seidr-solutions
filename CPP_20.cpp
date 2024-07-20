#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::vector<float> closest_elements = { numbers[0], numbers[1] };
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = { numbers[i], numbers[i + 1] };
        }
    }
    return closest_elements;
}

int main() {
    const std::vector<float> result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    if (issame(result, std::vector<float>{2.2f, 3.1f})) {
        std::cout << "Test case passed!" << std::endl;
    } else {
        std::cout << "Test case failed!" << std::endl;
    }
    
    return 0;
}