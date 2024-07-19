#include <iostream>
#include <vector>

int solution(std::vector<int> numbers) {
    int sum = 0;
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }
    return sum;
}

int main
{
    std::vector<int> numbers; 
    size_t n;
    try {
        std::cout << "Enter the number of elements: ";
        std::cin >> n;
        if (n <= 0) {
            throw std::runtime_error("Number of elements must be greater than zero.");
        }
        numbers.resize(n); 
        for (size_t i = 0; i < n; i++) {
            int num;
            try {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> num;
                if (!std::cin) {
                    throw std::runtime_error("Invalid input. Please enter a valid number.");
                }
                numbers[i] = num;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
                return 1;
            }
        }
        try {
            std::cout << "Sum of odd elements: " << solution(numbers) << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}