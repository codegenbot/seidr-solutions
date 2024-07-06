```cpp
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::modf(std::sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {}; // declare an empty list
    long long odd_sum = 0; // declare and initialize odd_sum
    long long result = double_the_difference(lst);
    assert(result == 0); 
    return 0;
}