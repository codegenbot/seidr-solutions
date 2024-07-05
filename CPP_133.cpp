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
    assert(sum_squares({-1, 1, 0}) == 2);
    assert(sum_squares({2.5, 3.1, -4.9}) == 37);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}