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

    std::cout << "Enter a threshold: ";
    std::cin >> threshold;

    // Call the function with user input
    bool result = below_threshold(numbers, threshold);

    // Print the result
    std::cout << "Below threshold: " << std::boolalpha << result << std::endl;

    return 0;
}