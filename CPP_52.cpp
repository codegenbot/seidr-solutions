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
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    std::cin.clear();

    std::cout << "Enter threshold: ";
    std::cin >> threshold;

    // Call the function
    bool result = below_threshold(numbers, threshold);

    // Print the result
    if (result) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is equal to or above the threshold." << std::endl;
    }

    return 0;
}