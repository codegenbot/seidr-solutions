#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}