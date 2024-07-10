```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0; 
    while(std::cin >> num) {
        lst.push_back(num);
    }
    odd_sum = double_the_difference(lst); 
    assert(odd_sum == double_the_difference(lst));
    std::cout << "The sum of the squares of the odd numbers is: " << odd_sum << std::endl;
    return 0;
}