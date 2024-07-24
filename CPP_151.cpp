#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0};  // Example list
    long long odd_sum = 0; // Define odd_sum here
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}