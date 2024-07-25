#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 3.4f, 6.7f, -2.9f, 5.8f};
    long long result = double_the_difference(numbers);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}