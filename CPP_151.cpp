```cpp
#include <iostream>
#include <vector>
#include <cmath>

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
    std::vector<long long> lst = {1, 8};
    long long odd_sum = double_the_difference(lst);
    return 0;
}