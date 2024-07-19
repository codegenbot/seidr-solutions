#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> lst){
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += (long long)std::pow(num, 2);
        }
    }
    return sum;
}