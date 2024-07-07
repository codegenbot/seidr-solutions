#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<float> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }
    
    long long odd_sum = double_the_difference(lst);
    
    std::cout << "The sum of squares of positive integers: " << odd_sum << std::endl;
    
    return 0;
}