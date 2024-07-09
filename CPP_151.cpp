#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == static_cast<int>(num)) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.25f, 3.125f};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The result is: " << odd_sum << std::endl;
    return 0;
}