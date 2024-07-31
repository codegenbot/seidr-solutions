#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.0, 3.0, 4.0};
    long long odd_sum = 10; // Example value, change accordingly
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}