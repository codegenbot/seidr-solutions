```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Enter numbers separated by spaces: ";
    int num;
    int sum_even = 0, sum_odd = 0;

    while (std::cin >> num) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }
    
    double averageEven = static_cast<double>(sum_even) / ((1.0 + sum_even > 0 ? sum_even : 1));
    double averageOdd = static_cast<double>(sum_odd) / ((1.0 + sum_odd > 0 ? sum_odd : 1));
    std::cout << "The average of even numbers is: " << averageEven << std::endl;
    std::cout << "The average of odd numbers is: " << averageOdd << std::endl;

    return 0;
}

std::pair<double, double> double_the_difference(const std::initializer_list<int>& lst) {
    int sum_even = 0, sum_odd = 0;

    for (int num : lst) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    return {(double)sum_even / std::distance(lst.begin(), lst.end()), (double)sum_odd / std::distance(lst.begin(), lst.end())};
}