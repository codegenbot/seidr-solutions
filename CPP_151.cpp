#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && std::floor((double)num) == num) { 
            if (std::fmod((double)num, 2.0) != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<long long> lst;
    long long odd_sum;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        long long num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;

    return 0;
}