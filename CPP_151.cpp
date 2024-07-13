```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    const std::vector<int> nums = split(input, ' ');

    int sum_even = 0, sum_odd = 0;

    for (int num : nums) {
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

std::vector<int> split(const std::string& str, char delimiter) {
    std::vector<int> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(std::stoi(token));
    }
    return tokens;
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