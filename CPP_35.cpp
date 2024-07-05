#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    float max_val = l[0];
    for(float num : l) {
        if(num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    std::vector<float> numbers;
    float num;
    std::cout << "Enter numbers followed by EOF (Ctrl+D on Unix, Ctrl+Z on Windows):\n";
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    if (!numbers.empty()) {
        float max_val = max_element(numbers);
        std::cout << "The maximum element is: " << max_val << "\n";
    } else {
        std::cout << "No numbers were entered.\n";
    }
    
    return 0;
}