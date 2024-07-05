#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = std::ceil(num);
        sum += ceil_num * ceil_num;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2); // Testing the function
    std::vector<float> input_values;
    float value;
    while (std::cin >> value) {
        input_values.push_back(value);
    }
    std::cout << sum_squares(input_values) << std::endl;
    return 0;
}