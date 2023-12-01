#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0.0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0.0 && lst[i] == std::floor(lst[i]) && static_cast<int>(lst[i]) % 2 != 0) {
            sum += lst[i] * lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};
    double odd_sum = double_the_difference(lst);
    
    assert(odd_sum == 1.5 * 1.5 + 3.5 * 3.5 + 5.5 * 5.5);
    
    return 0;
}