#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && std::fmod(num, 2) != 0) {
            sum += std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.7, 3.0, 4.2};
    long long odd_sum = 10;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}