#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
long long odd_sum = double_the_difference(lst);

int main() {
    std::cout << odd_sum << std::endl;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}