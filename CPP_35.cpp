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
        while(std::cin.get() == ' ') {
            std::cin.ignore(); 
        }
        numbers.push_back(num);
        while(std::cin.get() != '\n') { 
            std::cin.ignore(); 
        }
    }
    findMaximum(numbers);
    return 0;
}