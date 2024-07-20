#include <iostream>
#include <vector>
#include <assert.h>

long long double_the_difference(const std::vector<float> &lst) {
    long long sum = 0;
    for (float num : lst) {
        if (static_cast<int>(num) % 2 != 0) {
            sum += 2 * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0};
    long long odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    std::cout << odd_sum << std::endl;
    return 0;
}