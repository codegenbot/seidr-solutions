```cpp
#include <iostream>
#include <vector>
#include <numeric>

int double_the_difference(std::vector<double> lst) {
    double odd_sum = 0;
    for (double num : lst) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }
    return std::abs(odd_sum - std::accumulate(lst.begin(), lst.end(), 0.0));
}

int main() {
    std::vector<double> input_vector = {1.0, 2.0, 3.0};
    int result = double_the_difference(input_vector);
    assert(result == 5); 
    return 0;
}