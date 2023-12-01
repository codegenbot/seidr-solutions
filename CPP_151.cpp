#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && static_cast<int>(lst[i]) % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    while (std::cin >> input) {
        lst.push_back(input);
    }
    double odd_sum = double_the_difference(lst);
    assert(odd_sum == 1.5 * 1.5 + 3.5 * 3.5 + 5.5 * 5.5);
    
    return 0;
}