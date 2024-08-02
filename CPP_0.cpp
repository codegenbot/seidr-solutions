#include <iostream>
#include <vector>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 5.8, 4.9};
    float threshold = 0.5;
    
    if (has_close_elements(numbers, threshold)) {
        std::cout << "Close elements found!\n";
    } else {
        std::cout << "No close elements found.\n";
    }
    
    return 0;
}