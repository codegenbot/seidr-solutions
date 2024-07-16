#include <vector>

long long double_the_difference(const std::vector<double>& lst) {
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}