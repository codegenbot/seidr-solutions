#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
float odd_sum = 25.0;