#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(std::pow(num, 2));
        }
    }
    return sum;
}