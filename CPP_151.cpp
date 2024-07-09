#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (const float& x : lst) {
        if (x > 0 && std::floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    std::cin >> std::fixed >> std::setprecision(6);
    while(std::cin >> input)
        lst.push_back(input);

    long long odd_sum = double_the_difference(lst); 
    if (lst.size() % 2 == 0) {
        std::cout << "The difference is: " << odd_sum << std::endl;
    } else {
        std::cout << "The difference is: " << odd_sum - lst[0] << std::endl;
    }
    return 0;
}