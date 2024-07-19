#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(double a, double b) {
    return 2 * (a - b);
}

long long odd_sum(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long result = odd_sum(lst);
    std::cout << result << std::endl;
    return 0;
}