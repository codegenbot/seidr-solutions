#include <vector>
#include <cmath>

long long double_the_difference(std::vector<int> lst){
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}