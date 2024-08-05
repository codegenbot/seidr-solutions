#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1.0f) == 0 && ((int)num) % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.5, 3.5, 4.5, 5.5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 35);
    return 0;
}