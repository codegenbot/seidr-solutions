#include <iostream>
#include <vector>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float sum = 0.0;
    float odd_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (float)num;
        }
    }

    sum = odd_sum * odd_sum;

    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(double_the_difference(lst) == double_the_difference(lst));

    return 0;
}