#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}

int main() {
    std::vector<float> test_data = {-1, 1, 0};
    std::cout << sum_squares(test_data) << std::endl;
    return 0;
}