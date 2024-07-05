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
    std::vector<float> input = {-1, 1, 0};
    std::cout << (sum_squares(input) == 2) << std::endl;
    return 0;
}