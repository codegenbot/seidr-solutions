```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int calculate_odd_sum() {
    std::vector<double> lst = {1.0, 2.0, 3.0, 4.0};
    long long odd_sum = double_the_difference(lst);
    return odd_sum;
}

int main() {
    int result = calculate_odd_sum();
    assert(double_the_difference({1.0, 2.0, 3.0, 4.0}) == result);
    return 0;
}