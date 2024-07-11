#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;

    int count;
    std::cout << "Enter the number of elements: ";
    std::cin >> count;
    
    for (int i = 0; i < count; ++i) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    std::cout << "The difference between the sum of squares of even numbers and that of odd numbers is: " << odd_sum << std::endl;

    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum_of_squares_odd = 0, sum_of_squares_even = 0;

    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum_of_squares_odd += pow(num, 2);
            } else {
                sum_of_squares_even += pow(num, 2);
            }
        }
    }

    return abs(sum_of_squares_odd - sum_of_squares_even);
}