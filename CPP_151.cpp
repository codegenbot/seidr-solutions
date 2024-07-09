#include <iostream>
#include <vector>

long long double_the_difference(std::vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && num == static_cast<long long>(num)) { 
            if (num % 2 != 0) { 
                sum += num * num; 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<long long> lst = {1, 2};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The total square of all odd numbers is: " << odd_sum << std::endl;
    return 0;
}