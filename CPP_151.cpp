#include <vector>
#include <cmath>

long long double_the_difference(float num1, float num2) {
    return 2 * (num1 - num2);
}

long long odd_sum(std::vector<float> lst) {
    long long result = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            result += (long long)pow(num, 2);
        }
    }
    return result;
}