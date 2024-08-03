```cpp
#include <vector>
#include <iostream>

bool below_threshold(std::vector<int> l, int t);

int main() {
    std::vector<int> numbers;
    int threshold;

    // Read input from user
    std::cout << "Enter the list of numbers (space separated): ";
    for (std::string num; std::getline(std::cin, num);) {
        numbers.push_back(std::stoi(num));
    }

    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    // Check if all numbers are below the threshold
    bool result = below_threshold(numbers, threshold);

    // Print the output
    if (result) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }

    return 0;
}

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}