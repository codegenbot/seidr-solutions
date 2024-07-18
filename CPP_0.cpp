#include <iostream>
#include <vector>
#include <algorithm>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.7, 2.5, 6.3};
    float threshold = 1.0;
    
    if (has_close_elements(numbers, threshold)) {
        std::cout << "Close elements found." << std::endl;
    } else {
        std::cout << "No close elements found." << std::endl;
    }

    return 0;
}