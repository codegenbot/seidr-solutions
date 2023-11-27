#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include <ostream>

std::vector<float> lst = {1.5, 2.5, 3.0, 4.5, 5.0, 6.5};

double double_the_difference(std::vector<float> lst) {
    double odd_sum = 0;
    for(int i=0; i<lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            odd_sum += lst[i];
        }
    }
    return 2 * odd_sum;
}

int main() {
    double result = double_the_difference(lst);
    std::cout << "Result: " << result << "\n";
    return 0;
}