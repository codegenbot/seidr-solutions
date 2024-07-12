#include <iostream>
#include <vector>

int double_the_difference(const std::vector<double>& input_vector) {
    int odd_sum = 0;
    for (double x : input_vector) {
        if (std::floor(x + 0.5) != x)
            odd_sum += static_cast<int>(x * 2);
    }
    return odd_sum;
}

int main() {
    std::vector<double> input_vector = {1.0, 2.0, 3.0};
    int result = double_the_difference(input_vector); 
    assert(result == 5);
    return 0;
}