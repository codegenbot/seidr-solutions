```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5, 3, 4.8, -1.7, 6};
    long long result = double_the_difference(numbers);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}