#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    while (std::cin >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);
    std::cout << "Result: " << odd_sum << std::endl;
    
    return 0;
}