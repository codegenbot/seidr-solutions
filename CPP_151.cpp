#include <iostream>
#include <vector>
#include <cmath>

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
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};
    double result = double_the_difference(lst);
    double expected_result = 1.5 * 1.5 + 3.5 * 3.5 + 5.5 * 5.5;

    if (result == expected_result) {
        std::cout << "The result is correct." << std::endl;
    } else {
        std::cout << "The result is incorrect." << std::endl;
    }

    return 0;
}