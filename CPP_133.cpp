```
#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& input) {
    int output = 0;
    for (const auto& num : input) {
        output += static_cast<int>(num * num);
    }
    return output;

}

std::cout << sum_squares({}) << std::endl;