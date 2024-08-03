#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.0f, 5.0f, 7.0f, 9.0f};
    long long odd_sum = 165LL;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}