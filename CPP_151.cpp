```
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (fmod(num, 2.0) != 0.0) { // check if number is odd
                sum += pow(num, 2); // add square of the number to the sum
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 3.0f, 4.0f, 6.0f};
    long long odd_sum = double_the_difference(numbers);
    std::cout << "The sum of the squares of the odd positive integers in the list is: " << odd_sum << std::endl;
    return 0;
}