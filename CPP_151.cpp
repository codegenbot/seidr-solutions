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
    double odd_sum = 0.0;

    // Add code to populate the lst vector
    lst.push_back(1.5);
    lst.push_back(3.0);
    lst.push_back(4.25);

    // Add code to calculate odd_sum
    for (int i = 0; i < lst.size(); i++) {
        if (static_cast<int>(lst[i]) % 2 != 0) {
            odd_sum += lst[i];
        }
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}