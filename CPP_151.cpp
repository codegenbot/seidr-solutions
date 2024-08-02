#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.0f, 3.5f, -4.0f};
    long long result = double_the_difference(numbers);
    // assert(odd_sum == 14); // this line should be uncommented
    std::cout << "The result is: " << result << std::endl;
    return 0;
}