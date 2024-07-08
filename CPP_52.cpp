```
#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers;
    int threshold;
    
    // Read input from user
    std::cout << "Enter numbers (separated by spaces): ";
    for (std::string num; std::cin >> num; ) {
        numbers.push_back(std::stoi(num));
    }
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    // Check if all numbers are below the threshold
    bool result = below_threshold(numbers, threshold);
    
    // Print the result
    if (result) {
        std::cout << "All numbers are below the threshold.\n";
    } else {
        std::cout << "Not all numbers are below the threshold.\n";
    }
    
    return 0;
}