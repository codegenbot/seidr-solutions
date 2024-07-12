```cpp
#include <iostream>
#include <vector>
#include <cassert>

int main() {
    std::vector<double> input_vector = {1.0, 2.0, 3.0};
    int odd_sum = double_the_difference(input_vector); 
    assert(odd_sum == 5);
    return 0;
}

int double_the_difference(const std::vector<double>& input_vector) {
    int odd_sum = 0;
    for (double x : input_vector) {
        if (std::floor(x + 0.5) != x)
            odd_sum += static_cast<int>(x * 2);
    }
    return odd_sum;
}