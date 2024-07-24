#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> lst = {3.0, 2.0, 4.0};
long long odd_sum = double_the_difference(lst);

assert(double_the_difference(lst) == odd_sum);

return 0;