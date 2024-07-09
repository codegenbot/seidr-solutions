```cpp
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

float median(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    int size = numbers.size();
    if (size % 2 == 0)
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    else
        return numbers[size / 2];
}

int main() {
    std::vector<float> numbers;
    while (true) {
        std::string input;
        std::cin >> input;
        if (input == "stop") break;
        try {
            float num = std::stof(input);
            numbers.push_back(num);
        } catch(const std::invalid_argument& e) {
            std::cout << "Invalid number. Please enter a valid floating point number." << std::endl;
            while (!(std::cin >> input)) {  
                std::cout << "Invalid input. Please try again: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }
    if (numbers.size() == 0) {
        std::cout << "The median of the given numbers is: No numbers entered." << std::endl;
    } else {
        float result = median(numbers);
        std::cout << "The median of the given numbers is: " << result << std::endl;
    }
    return 0;
}