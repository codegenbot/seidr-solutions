#include <vector>
#include <iostream>
#include <cmath>

long long double_the_difference(std::vector<float>& lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)std::pow(num, 2);
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << double_the_difference(lst) << std::endl;
    return 0;
}