#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << "The maximum number is: " << maxNum << std::endl;
    return 0;
}

int main_user_input() {
    std::vector<int> numbers;
    int num = 0; 
    std::cout << "Enter numbers (separated by spaces): ";
    while(std::cin >> num) { 
        while(std::cin.peek() == ' ') {
            std::cin.ignore();
        }
        numbers.push_back(num);
        while(std::cin.get() != '\n') { 
            std::cin.ignore(); 
        }
    }
    findMax(numbers);
    return 0;
}