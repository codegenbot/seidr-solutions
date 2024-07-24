#include <vector>

long long double_the_difference(std::vector<float> lst, long long odd_sum){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == int(num) && int(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return (sum + odd_sum) * 2;
}