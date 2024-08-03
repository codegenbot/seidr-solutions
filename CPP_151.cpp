#include <vector>
#include <cassert>

long long double_the_difference(std::vector<int> lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}

std::vector<int> lst = {1, 3, 5, 7, 9};
long long odd_sum = 165LL;
assert(double_the_difference(lst) == odd_sum);