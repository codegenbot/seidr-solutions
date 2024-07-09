#include <iostream>
#include <vector>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.5, 3.6, -4.7, 8.9};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The result is: " << odd_sum << std::endl;
    return 0;
}