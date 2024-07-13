```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::pair<double, double> double_the_difference(int sum_even, int sum_odd) {
    return {(double)sum_even / 2, (double)sum_odd / 2};
}

int main() {
    std::cout << "Enter numbers separated by spaces: ";
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);

    int num;
    int sum_even = 0, sum_odd = 0;

    while (iss >> num) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }
    
    auto [a, b] = double_the_difference(sum_even, sum_odd);
    std::cout << "The average of even numbers is: " << a << std::endl;
    std::cout << "The average of odd numbers is: " << b << std::endl;

    return 0;
}