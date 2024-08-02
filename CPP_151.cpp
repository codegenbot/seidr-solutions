#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.7f, -3.14f};
    long long result = double_the_difference(numbers);
    // assert(odd_sum == result); // comment this line
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}