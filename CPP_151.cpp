#include <iostream>
#include <vector>

long long double_the_difference(std::vector<long long> lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && std::floor((double)num) == (double)num) { 
            if ((double)num % 2 != 0) { 
                sum += (long long)num * (long long)num; 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<long long> lst = {1, 2};
    long long odd_sum = double_the_difference(lst);
    return 0;
}