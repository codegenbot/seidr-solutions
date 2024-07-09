```cpp
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::array<float, 3> lst = {{1.5f, 2.0f, 3.5f}};
    long long odd_sum = double_the_difference({lst[0], lst[1], lst[2]}); 
    assert(odd_sum == 14);
    return 0;
}