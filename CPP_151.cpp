#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float odd_sum = 0.0;
    float even_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num) {
            if ((int)num % 2 != 0) {
                odd_sum += num;
            } else {
                even_sum += num;
            }
        }
    }

    return std::fabs(odd_sum - even_sum) * 2;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    float result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    
    assert(double_the_difference(lst) == (2 * result));

    return 0;
}