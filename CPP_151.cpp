#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst);

int main() {
    std::vector<float> lst = {1.5, 2.3, -3.4, 4.0, 5.5};
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

long long double_the_difference(const std::vector<float>& lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return 2 * odd_sum;
}