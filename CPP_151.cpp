#include <vector>
#include <cmath>
#include <cassert>

long double double_the_difference(const std::vector<float> &lst);

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long double odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}