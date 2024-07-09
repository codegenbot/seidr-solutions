```cpp
#include <initializer_list>
#include <vector>

int double_the_difference(std::vector<float> lst) {
    int odd_sum = 0;
    for (float num : lst) {
        if (num % 1 != 0)
            odd_sum += (int)(num * 2);
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5};
    assert(double_the_difference(lst) == 6);
    return 0;
}