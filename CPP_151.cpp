#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num) % 2 != 0) {
            sum += (long long)num * (long long)num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0}; // Example input
    long long odd_sum = 35; // Example expected sum 1*1 + 3*3 + 5*5
    assert(double_the_difference(lst) == odd_sum);
    std::cout << "Test passed!" << std::endl;
    return 0;
}