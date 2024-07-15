#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (size_t i = 1; i < lst.size(); ++i) {
        sum += 2 * std::abs(lst[i] - lst[i - 1]);
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0};
    long long odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    std::cout << "Output: " << odd_sum << std::endl;

    return 0;
}