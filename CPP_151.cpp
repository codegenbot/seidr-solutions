#include <iostream>
#include <vector>
#include <cmath>

std::vector<float> lst = {1.5, 2.5, 3.0, 4.5, 5.0, 6.5};

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for(int i=0; i<lst.size(); i++) {
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    double odd_sum = double_the_difference(lst);

    double result = 2 * odd_sum;
    std::cout << "Result: " << result << "\n";
    return 0;
}