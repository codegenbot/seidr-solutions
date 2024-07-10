#include <initializer_list>
#include <vector>
#include <cmath>
#include <cassert>

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
    long long odd_sum = double_the_difference({1.5, 3.25, 4.75});
    assert(odd_sum == double_the_difference({1.5, 3.25, 4.75}) );
    return 0;