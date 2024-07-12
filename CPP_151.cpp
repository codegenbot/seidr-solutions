#include <vector>
#include <algorithm>
#include <iostream>

std::pair<double, double> double_the_difference(const std::vector<int>& lst) {
    int sum_even = 0, sum_odd = 0;

    for (int num : lst) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    return {(double)sum_even / lst.size(), (double)sum_odd / lst.size()};
}

int main() {
    std::vector<int> lst = {1, 3, 5, 7}; 
    auto [a, b] = double_the_difference(lst);
    std::cout << "The average of even numbers is: " << a << std::endl;
    std::cout << "The average of odd numbers is: " << b << std::endl;
    return 0;
}