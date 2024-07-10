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
    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line.empty()) break; 
        double val = std::stod(line);
        odd_sum += double_the_difference({val});
    }
    return 0;
}