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
    std::vector<float> numbers = {1.5, 3.0, 4.25};
    long long result = double_the_difference(numbers);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}