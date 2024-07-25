```
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.0f, -3.0f, 4.25f};
    long long result = double_the_difference(numbers);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}