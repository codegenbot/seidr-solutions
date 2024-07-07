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

int main() {
    std::cout << sum_squares({1.5f, 2.5f}) << std::endl;
    return 0;
}