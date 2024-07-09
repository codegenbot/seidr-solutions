#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 4.0, -3.7, 6.0};
    float odd_sum;

    long long double result = double_the_difference(lst);
    std::cout << "The difference is: " << result << std::endl;

    return 0;
}