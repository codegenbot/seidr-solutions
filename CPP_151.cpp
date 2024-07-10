```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int calculate_odd_sum() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f};
    long long odd_sum = double_the_difference(lst);
    return static_cast<int>(odd_sum);
}

int main() {
    int result = calculate_odd_sum();
    return result;
}