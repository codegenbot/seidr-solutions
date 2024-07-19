```cpp
#include <iostream>
#include <vector>

int solution(std::vector<long long> numbers) {
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

    std::vector<long long> numbers;  
    for (size_t i = 0; i < n; i++) {
        long long num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    std::cout << "Sum of odd elements: " << solution(numbers) << std::endl;
}