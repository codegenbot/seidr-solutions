#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

long long double_the_difference(std::vector<double> lst){
    long long sum = 0;
    for (double num : lst){
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    std::cout << "Odd sum: " << odd_sum << std::endl;
    return 0;
}