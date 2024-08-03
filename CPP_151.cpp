#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.0, 4.5};
    assert(double_the_difference(lst) == 6);
    return 0;
}