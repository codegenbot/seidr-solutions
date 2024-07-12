```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<double> input_vector;
    input_vector.push_back(1.0);
    input_vector.push_back(2.0);
    input_vector.push_back(3.0);
    int odd_sum = double_the_difference(input_vector); 
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