#include <iostream>
#include <vector>

double double_the_difference(const std::vector<double>& lst) {
    double sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.5, 2.0, 3.3, 4.0, 5.5};
    double odd_sum = double_the_difference(lst);
    std::cout << "Odd numbers squared sum: " << odd_sum << std::endl;
    return 0;
}