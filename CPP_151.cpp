#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<double> lst) {
    double sum = 0;
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
    std::vector<double> lst = {1.5, 3.0, 4.25, 6.0};
    double odd_sum = double_the_difference(lst);

    return 0;
}