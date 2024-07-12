```#include <iostream>
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

    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    std::cout << "Enter a series of numbers separated by spaces: ";
    for (int i = 0; i < 5; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold.\n";
    } else {
        std::cout << "At least one number is not below the threshold.\n";
    }

    return 0;
}