#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && std::floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> inputVector = {1.5f, -3.7f, 4.0f, -2.0f, 3.0f};
    long long output = double_the_difference(inputVector);
    std::cout << "The difference is: " << output << std::endl;
    return 0;
}