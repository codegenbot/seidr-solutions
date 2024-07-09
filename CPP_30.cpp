#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    
    std::vector<float> pos = get_positive(input);
    
    // Print the positive numbers
    if (pos.empty()) {
        std::cout << "No positive numbers found." << std::endl;
    } else {
        std::cout << "Positive numbers: ";
        for (float i : pos) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}