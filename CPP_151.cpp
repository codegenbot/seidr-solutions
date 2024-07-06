#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0;

    std::cout << "Enter the numbers (enter 'q' when done): ";
    while (std::cin >> num) {
        if (num == 'q') break;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    std::cout << "The sum of squares of even numbers is: " << odd_sum << std::endl;

    return 0;
}