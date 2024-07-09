```c
#include <assert.h>

int double_the_difference(float *lst) {
    int odd_sum = 0;
    for (int i = 0; i < sizeof(lst) / sizeof(lst[0]); i++) {
        if ((int)lst[i] % 2 != 0)
            odd_sum += (int)lst[i] * 2;
    }
    return odd_sum;
}

float* lst = new float[] {1.5f, 2.0f, 3.5f};
int result = double_the_difference(lst);
assert(result == 7); 
delete[] lst;