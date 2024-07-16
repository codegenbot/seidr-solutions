#include <vector>
#include <cmath>
#include <cassert>

long double double_the_difference(const std::vector<float> &lst) {
    long double sum = 0.0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if (i % 2 == 0) {
            sum += lst[i];
        } else {
            sum -= lst[i];
        }
    }
    return 2 * sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long double odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}