#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t);

int main() {
    std::vector<int> numbers;
    int threshold;

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    // Check if all elements are below the threshold
    bool result = below_threshold(numbers, threshold);

    // Print the result
    if (result) {
        std::cout << "All elements are below the threshold." << std::endl;
    } else {
        std::cout << "At least one element is not below the threshold." << std::endl;
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