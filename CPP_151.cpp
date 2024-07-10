```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<long> lst) {
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
    std::vector<long> lst; long long num, odd_sum = 0;
    while(std::cin >> num) {
        lst.push_back(num);
        if (num > 0 && std::floor((double)num) == num) { 
            if (std::fmod((double)num, 2.0) != 0.0) { 
                odd_sum += num * num;
            }
        }
    } 
    long long main_result = double_the_difference(lst); 
    std::cout << "The sum of the squares of the odd numbers is: " << (main_result + odd_sum) << std::endl;
    return 0;
}