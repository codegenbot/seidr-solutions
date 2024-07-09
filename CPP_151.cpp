```cpp
#include <vector>
#include <assert.h>

int double_the_difference(std::vector<float> lst) {
    int odd_sum = 0;
    for (float num : lst) {
        if ((int)num % 2 != 0)
            odd_sum += (int)num * 2;
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5};
    int result = double_the_difference(lst);
    // assert(result == 7); 
    return 0;
}