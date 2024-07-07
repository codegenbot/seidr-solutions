```cpp
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
    std::vector<float> input{};
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    int output = sum_squares(input);
    std::cout << output << std::endl;
}