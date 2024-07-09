#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
long long odd_sum;

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for(const float& num : lst) {
        if (num > 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}