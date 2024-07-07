#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<double> lst) {
    return std::accumulate(lst.begin(), lst.end(), 0.0, [](double x, double y) { 
        if (y > 0 && std::floor(y) == y) { 
            if (std::fmod(y, 2.0) != 0.0) { 
                return x + std::pow(y, 2);
            }
        }
        return x;
    });
}

int main() {
    std::vector<double> lst = std::vector<double>({1.5});
    double odd_sum = double_the_difference(lst);

    return 0;
}