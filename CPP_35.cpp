#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    if (numbers.empty()) {
        return -1;
    }
    int maxNum = *std::max_element(numbers.begin(), numbers.end());
    std::cout << maxNum << std::endl;
    return 0;
}

int main() {
    std::vector<int> numbers;
    int num = 0; 
    std::cout << "Enter numbers (separated by spaces): ";
    while(std::cin >> num) { 
        numbers.push_back(num);
    }
    findMax(numbers);
    return 0;
}