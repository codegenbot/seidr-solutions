#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0, 6.0, 7.0};
    long long odd_sum = 0;
    
    long long result = double_the_difference(lst);
    std::cout << result << std::endl;
    return 0;
}

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return 2 * odd_sum;
}