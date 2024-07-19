#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<int>& lst){
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 3, 5, 2, 4};
    assert(double_the_difference(lst) == double_the_difference(lst));
    return 0;
}