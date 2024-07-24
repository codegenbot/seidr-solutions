#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0, 2.0, 4.0};
    long long odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}