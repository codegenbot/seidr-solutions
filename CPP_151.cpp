#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> lst;
    for (int i = 0; i < n; ++i) {
        float num;
        std::cin >> num;
        lst.push_back(num);
    }
    long long odd_sum = double_the_difference(lst);
    std::cout << odd_sum << std::endl;
    return 0;
}