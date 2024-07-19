```cpp
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

int main() {
    std::vector<int> numbers; 
    size_t n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    numbers.resize(n); 
    for (size_t i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::string input;
        std::cin >> input;
        try {
            num = std::stoi(input);
            numbers[i] = num;
        } catch (const std::invalid_argument& e) {
            // Handle invalid input
            return -1; 
        }
    }
    std::cout << "Sum of odd elements: " << solution(numbers) << std::endl;
}