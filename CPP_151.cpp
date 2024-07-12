#include <iostream>
#include <vector>
#include <numeric>
#include <cassert>

int double_the_difference(std::vector<float> lst) {
    int odd_sum = 0;
    for (float num : lst) {
        if (num % 2 != 0) {
            odd_sum += static_cast<int>(num);
        }
    }
    return abs(odd_sum - std::accumulate(lst.begin(), lst.end(), 0.0f));
}

int main() {
    std::vector<float> input_vector = {1.0f, 2.0f, 3.0f};
    int result = double_the_difference(input_vector);
    assert(result == 5); 
    return 0;
}