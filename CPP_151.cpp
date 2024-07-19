#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int odd_sum;

    // Read the input list 'lst'
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        std::cin >> num;
        lst.push_back(num);
    }

    // Read the 'odd_sum'
    std::cin >> odd_sum;

    // Perform the calculation and check the result
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}