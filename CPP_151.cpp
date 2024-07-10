#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

long long double_the_difference(std::vector<long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::allocator<long> alloc;
    std::vector<long, std::allocator<long>> lst(alloc);
    long long num;
    int odd_sum = 0; // Declare and initialize
    while(std::cin >> num) {
        lst.push_back(num);
    }
    
    long long main_result = double_the_difference(lst); 
    assert (double_the_difference(lst) == odd_sum );
    std::cout << "The sum of the squares of the odd numbers is: " << main_result << std::endl;
    return 0;
}