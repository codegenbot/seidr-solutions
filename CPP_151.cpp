#include <vector>
#include <cassert>

float double_the_difference(std::vector<float>& lst) {
    float odd_sum = 0;
    std::size_t __l = lst.size();
    for (std::size_t i = 0; i < __l; ++i) {
        if (lst[i] % 2 != 0)
            odd_sum += lst[i] * 2;
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    assert(double_the_difference(lst) == 9.0f);
}