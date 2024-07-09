#include <iostream>
#include <vector>
#include <cmath>
#include <cfenv>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.8f, 6.9f, 7.4f, -8.2f};
    float odd_sum = 0.0f;

    for (float num : lst) {
        if (num > 0 && std::modf(num, &num) == 0) { 
            odd_sum += num; 
        }
    }

    std::cout << "Original list: ";
    for (float n : lst) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    long long result = double_the_difference(lst);

    std::cout << "Result: " << result << std::endl;
    
    return 0;
}