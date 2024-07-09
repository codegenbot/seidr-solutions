#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (static_cast<long long>(num) % 2 != 0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    float x;
    float y;
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    std::vector<float> lst = {x, y};
    long long odd_sum = double_the_difference(lst);
    return 0;
}