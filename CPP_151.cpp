```cpp
#include <vector>
#include <assert.h>

int double_the_difference(vector<float> lst) {
    int odd_sum = 0;
    for (float num : lst) {
        if (num % 1 != 0)
            odd_sum += (int)(num * 2);
    }
    return odd_sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5};
    assert(double_the_difference(lst) == 6);
    return 0;
}