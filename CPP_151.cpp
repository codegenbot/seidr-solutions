```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

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

int main_new() {
    std::cout << "Enter numbers separated by spaces: ";
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);

    int num;
    int sum_even = 0, sum_odd = 0;

    while (iss >> num) {
        auto lst = {num};
        for (auto it : lst) {
            if (it % 2 == 0)
                sum_even += it;
            else
                sum_odd += it;
        }
        auto [a, b] = double_the_difference(lst);
        std::cout << "The average of even numbers is: " << a << std::endl;
        std::cout << "The average of odd numbers is: " << b << std::endl;
    }
    return 0;
}