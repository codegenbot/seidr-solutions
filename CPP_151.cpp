#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0};
    long long odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    std::cout << "Output: " << odd_sum << std::endl;

    return 0;
}