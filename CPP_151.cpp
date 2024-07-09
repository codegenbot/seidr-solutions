#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && std::floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    while(std::cin >> input)
        lst.push_back(input);

    long long odd_sum = double_the_difference(lst); 

    assert(odd_sum == (std::abs(double_the_difference(lst)) + 2*double_the_difference({1.0}) - double_the_difference({0})));

    std::cout << "The difference is: " << odd_sum << std::endl;
    return 0;
}