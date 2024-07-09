```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int findMaximum(std::vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << maxNum << std::endl;
    return 0;
}

int main() {
    std::vector<int> numbers;
    int num = 0; 
    std::cout << "Enter numbers (separated by spaces): ";
    while(std::cin >> num) { 
        numbers.push_back(num);
        std::cin.ignore(); // Add this line to remove the extra space
    }
    findMaximum(numbers);
    return 0;
}