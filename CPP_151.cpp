#include <vector>
#include <cmath>
#include <cassert>

long double double_the_difference(std::vector<float> lst) {
    long double sum = 0;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }

    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.7, 3.0};
    long double odd_sum = double_the_difference(lst);

    assert(odd_sum == 9.0);

    return 0;
}