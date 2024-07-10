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

int main() {
    std::vector<float> lst = {1.5f, 3.25f, 4.75f};
    long long odd_sum = double_the_difference(lst);
    assert (double_the_difference({1.5f, 3.25f, 4.75f}) == odd_sum );
    return 0;
}