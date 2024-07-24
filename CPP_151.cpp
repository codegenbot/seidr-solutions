#include <iostream>
#include <vector>
#include <cmath> // Include cmath for pow function
#include <cassert>

double double_the_difference(std::vector<float> lst){ // Remove 'long long' from the return type
    double sum = 0; // Change 'long long' to 'double'
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2); // Remove casting to long long for pow result
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; // Declare lst here
    float num;
    while (std::cin >> num) {
        lst.push_back(num);
    }

    double odd_sum = double_the_difference(lst); // Change type to double

    // Assert after getting odd_sum
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}