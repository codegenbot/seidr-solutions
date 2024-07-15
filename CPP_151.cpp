#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(const std::vector<float>& lst) {
    double odd_sum = 0;
    long long result = 0;
    
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            result += (long long)pow(num, 2);
        }
    }
    return result * 2;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.3, 5.0};
    std::cout << double_the_difference(lst) << std::endl;
    return 0;
}