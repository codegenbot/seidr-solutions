#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 813); // Assuming expected output 813
    return odd_sum;
}