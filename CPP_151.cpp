```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    long long odd_sum = 0; 
    std::cout << "Enter the numbers for the vector (enter -1 to stop):" << std::endl;
    float num;
    while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        lst.push_back(num);
    }
    odd_sum = double_the_difference(lst);
    std::cout << "Sum of squares of odd numbers: " << odd_sum << std::endl;
    return 0;
}