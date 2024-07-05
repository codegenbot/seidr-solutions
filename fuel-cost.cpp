```c++
#include <vector>
#include <cmath>

int calculateFuelCost(std::initializer_list<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = std::floor((double(num) / 3));
        if(result >= 1) {
            result -= 1;
        } else {
            result = 0;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}

int main() {
    int num1, num2, num3; 
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter third number: ";
    std::cin >> num3;

    std::vector<int> numbers = {num1, num2, num3};
    int result = calculateFuelCost(numbers);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}