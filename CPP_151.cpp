#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    std::vector<float> lst = {1, 2, 3, 4, 5, 6};
    long long odd_sum = 27;
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}