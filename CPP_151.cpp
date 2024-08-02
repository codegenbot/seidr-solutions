#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    return sum;
}