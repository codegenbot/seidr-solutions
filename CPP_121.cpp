```cpp
#include <iostream>
#include <vector>

int solution(std::vector<std::string> numbers) {
    int sum = 0;
    for (int i = 1; i < numbers.size(); i++) {
        if (stoi(numbers[i]) % 2 != 0) {
            sum += stoi(numbers[i]);
        }
    }
    return sum;
}

int main() {
    std::vector<std::string> numbers; 
    int n; 
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    numbers.resize(n); 
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers[i] = std::to_string(num);
    }
    std::cout << "Sum of odd elements: " << solution(numbers) << std::endl;
}