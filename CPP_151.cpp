#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num) % 2 != 0) {
            sum += ((int)num) * ((int)num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    
    // Read input from user
    while (std::cin >> num) {
        lst.push_back(num);
    }

    std::cout << double_the_difference(lst) << std::endl;

    return 0;
}