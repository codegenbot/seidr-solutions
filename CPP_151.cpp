#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1, 2, 3, 4};
    long long odd_sum = double_the_difference(lst);
    //assert(odd_sum == whatever_you_expect_odd_sum_to_be);

    return 0;
}