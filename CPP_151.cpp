```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<const float*> lst) {
    long long sum = 0;
    for (const float* num : lst) {
        if (*num > 0 && std::floor(*num) == *num) { 
            if (std::fmod(*num, 2.0) != 0.0) { 
                sum += std::pow(*num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<const float*> lst = {(float)1.5, (float)3.0, (float)4.25, (float)6.0};
    long long odd_sum = double_the_difference(lst);

    return 0;
}