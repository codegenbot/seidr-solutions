#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = std::ceil(num);
        sum += ceil_num * ceil_num;
    }
    return sum;
}

int main() {
    std::cout << sum_squares({-1.0, 1.0, 0.0}) << std::endl; // Should output 2
    return 0;
}