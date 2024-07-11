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
    std::cout << "Enter numbers (type 'q' to quit): ";
    float num;
    while(std::cin >> num) {
        if(num == 'q') break;
        lst.push_back(num);
    }
    odd_sum = double_the_difference(lst);
    std::cout << "The sum of the squares of the odd numbers is: " << odd_sum << std::endl;
}