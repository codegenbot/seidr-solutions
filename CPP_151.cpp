#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.0f, 3.5f, 4.0f};
    long long result = double_the_difference(numbers);
    std::cout << "The sum of squares of odd positive integers in the list is: " << result << std::endl;
    return 0;
}