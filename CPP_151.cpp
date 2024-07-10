``` 
#include <initializer_list>
#include <vector>
#include <cmath>
#include <cassert>

int main() {
    std::initializer_list<double> lst = {1.5, 3.25, 4.75};
    long long odd_sum = 0;
    for (double num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                odd_sum += std::pow(num, 2);
            }
        }
    }
    return 0;
}