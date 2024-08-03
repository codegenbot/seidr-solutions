#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst[i];
    }

    long long odd_sum = double_the_difference(lst); // assuming 'odd_sum' is calculated elsewhere

    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}