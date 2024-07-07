#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {2.0f, 3.5f, 1.0f, -4.0f, 6.0f};
    float odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}