```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

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
    
    double averageEven = static_cast<double>(sum_even) / ((input_vector.size() > 0 ? input_vector.size() : 1));
    double averageOdd = static_cast<double>(sum_odd) / ((input_vector.size() + sum_odd > 0 ? sum_odd : 1));
    std::cout << "The average of even numbers is: " << averageEven << std::endl;
    std::cout << "The average of odd numbers is: " << averageOdd << std::endl;

    return 0;
}

std::pair<double, double> double_the_difference(const std::initializer_list<int>& lst) {
    std::vector<int> input_vector(lst);
    int sum_even = 0, sum_odd = 0;

    for (int num : input_vector) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    return {(double)sum_even / input_vector.size(), (double)sum_odd / input_vector.size()};
}