#include <iostream>
#include <vector>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float odd_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num;
        }
    }

    return odd_sum * 2;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    float result = double_the_difference(lst);
    assert(result == double_the_difference(lst));
    
    return 0;
}