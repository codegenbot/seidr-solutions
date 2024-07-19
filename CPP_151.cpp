#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5};
    std::cout << double_the_difference(lst) << std::endl;

    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}