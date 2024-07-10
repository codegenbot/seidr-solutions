#include <iostream>
#include <vector>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float odd_sum = 0.0;
    float even_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num) {
            if ((int)num % 2 != 0) {
                odd_sum += num;
            } else {
                even_sum += num;
            }
        }
    }

    return (odd_sum - even_sum) * 2;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == 6.0);

    return 0;
}