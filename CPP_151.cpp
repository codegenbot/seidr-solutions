```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f}; 
    int odd_sum = double_the_difference(lst); 
    assert(odd_sum == 14); 
}