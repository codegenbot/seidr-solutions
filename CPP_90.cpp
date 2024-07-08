#include <iostream>
#include <algorithm>
#include <vector>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // None in C++ is represented as 0 or -1, depending on the context.
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers;
    int num;
    
    // Read input from the user
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) break;
        numbers.push_back(num);
    }
    
    // Call the function and print the output
    int result = next_smallest(numbers);
    if (result != -1) {
        std::cout << "The smallest number larger than all others is: " << result << std::endl;
    } else {
        std::cout << "No such number exists." << std::endl;
    }
    
    return 0;
}