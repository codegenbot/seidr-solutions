```cpp
#include <vector>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float odd_sum = 0;
    for (std::size_t __i = 0; __i < lst.size(); ++__i) {
        if (lst[__i] % 2 != 0)
            odd_sum += lst[__i] * 2;
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    assert(double_the_difference(lst) == 0);
}