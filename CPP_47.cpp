#include <iostream>
#include <vector>
#include <algorithm>

float median(std::vector<float> numbers) {
    if (numbers.empty()) 
        throw std::runtime_error("Input vector is empty");
    
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return (numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0;
    else
        return numbers[numbers.size()/2];

int main() {
    std::vector<float> numbers;
    float num;
    std::cout << "Enter some floating point numbers separated by spaces: ";
    while(std::cin >> num) {
        numbers.push_back(num);
    }
    try {
        std::cout << "The median is: " << median(numbers) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; 
    }
    return 0;
}