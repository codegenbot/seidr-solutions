```cpp
#include <iostream>
#include <cmath>

long long double_the_difference(std::initializer_list<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    long long odd_sum = 0;
    std::initializer_list<double> lst;
    std::cout << "Enter numbers (space separated): ";
    for (std::string num; std::getline(std::cin, num); ) {
        if (!num.empty()) {
            double val = std::stod(num);
            odd_sum += double_the_difference({val});
        }
    }
    return 0;
}