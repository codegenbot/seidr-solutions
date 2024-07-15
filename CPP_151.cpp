#include <vector>
#include <cmath>

long long double_the_difference(float a, float b) {
    return 2 * (b - a);
}

long long main() {
    std::vector<float> lst = {1.0, 2.5, 3.0, 4.0, 5.0};
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return odd_sum;
}