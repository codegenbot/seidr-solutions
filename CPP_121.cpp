#include <iostream>
#include <vector>
#include <string>

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
    size_t n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<std::string> numbers;  
    for (size_t i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(std::to_string(num));
    }
    if(numbers.empty()) { 
        std::cout << "Sum of odd elements: 0" << std::endl;
    } else {
        std::cout << "Sum of odd elements: " << solution({std::stoi(x) for x in numbers}) << std::endl;
    }
    return 0;
}