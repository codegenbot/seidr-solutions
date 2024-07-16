#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
long double odd_sum = double_the_difference(lst);

long double double_the_difference(const std::vector<float> &lst) {
    long double sum = 0.0;
    for (size_t i = 0; i < lst.size(); i += 2) {
        if (i + 1 < lst.size()) {
            sum += 2 * (lst[i + 1] - lst[i]);
        }
    }
    return sum;
}

int main() {
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}