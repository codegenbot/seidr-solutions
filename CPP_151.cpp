#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, -3.8, 4.7, 9.9};
    int odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += static_cast<int>(pow(num, 2));
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}