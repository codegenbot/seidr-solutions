#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && std::fmod(num, 2) != 0) {
            sum += std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.2, 4.0, 5.7};
    long long odd_sum = 1*1 + 3*3 + 5*5;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}