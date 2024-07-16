#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<int>& lst) {
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5}; // Add your list of numbers
    long long odd_sum = 25; // Define the expected sum for the given list
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}