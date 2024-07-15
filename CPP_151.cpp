#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float>& lst) {
    long long result = 0;
    for (float num : lst) {
        if (num > 0 && static_cast<int>(num) == num && static_cast<int>(num) % 2 != 0) {
            result += static_cast<long long>(std::pow(num, 2));
        }
    }
    return result;
}

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0, 6.0}; // Example list
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 18);
    return 0;
}